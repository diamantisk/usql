/******************************************************************
 *
 * uSQL for C++
 *
 * Copyright (C) Satoshi Konno 2012
 *
 * This is licensed under BSD-style license, see file COPYING.
 *
 ******************************************************************/

#include <boost/algorithm/string.hpp> 

#include "SQLProxy.h"
#include "MD5.h"
#include "SQLProxyDataSet.h"

using namespace std;
using namespace uSQL;

uSQL::SQLProxy::SQLProxy()
{
}

uSQL::SQLProxy::~SQLProxy()
{
}

bool uSQL::SQLProxy::getKey(SQLCollection *collectionNode, SQLExpression *exprNode, std::string &key) 
{
  string keyString;
  
  string tableName = collectionNode->getValue();
  keyString = tableName;

  string exprString;
  exprNode->toString(exprString);
  keyString.append(exprString);
  
  MD5::hash(keyString, key);

  return true;
}

bool uSQL::SQLProxy::getStatementKey(SQLStatement *stmt, std::string &key, SQLError &error) 
{
  SQLCollections *sqlFrom = stmt->getCollectionsNode();
  if (!sqlFrom) {
    error.setMessage("FROM section was not found");
    return false;
  }
  
  if (sqlFrom->getChildCount() < 1) {
    error.setMessage("Data source was not found");
    return false;
  }
  if (1 < sqlFrom->getChildCount()) {
    error.setMessage("Data source is more than one");
    return false;
  }
  
  SQLCollection *dataSource = sqlFrom->getCollectionNode(0);
  
  SQLWhere *sqlWhere = stmt->getWhereNode();
  if (!sqlWhere) {
    error.setMessage("WHERE section was not found");
    return false;
  }
  
  return getKey(dataSource, sqlWhere, key);
}

bool uSQL::SQLProxy::getKey(SQLStatement *stmt, std::string &key, SQLError &error) 
{
  SQLCommand *sqlCmd = stmt->getCommandNode();
  if (!sqlCmd) {
    error.setMessage("COMMAND section was not found");
    return false;
  }
  
  return getStatementKey(stmt, key, error);
}

bool uSQL::SQLProxy::getInsertDictionary(SQLStatement *stmt, SQLProxyDataSet &dictionary, SQLError &error)
{
  SQLColumns *sqlColumn = stmt->getColumnsNode();
  if (!sqlColumn) {
    error.setMessage("Column section was not found");
    return false;
  }

  SQLValues *sqlValue = stmt->getValuesNode();
  if (!sqlValue) {
    error.setMessage("VALUES section was not found");
    return false;
  }

  SQLNodeList *sqlColums = sqlColumn->getChildNodes();
  SQLNodeList *sqlValues = sqlValue->getChildNodes();
  
  if (sqlColums->size() != sqlValues->size()) {
    error.setMessage("List of values less than number of Columns");
    return false;
  }
  
  size_t columsCount = sqlColums->size();
  for (size_t n=0; n<columsCount; n++) {
    std::string colum = sqlColums->getNode(n)->toString(); 
    std::string value = sqlValues->getNode(n)->toString();
    trimSQLString(value);
    dictionary.set(colum, value);
  }
  
  return true;
}

bool uSQL::SQLProxy::getUpdateDictionary(SQLStatement *stmt, SQLProxyDataSet &dictionary, SQLError &error)
{
  SQLSets *sqlSet = stmt->getSetsNode();
  if (!sqlSet) {
    error.setMessage("Set section was not found");
    return false;
  }

  int dictCount = sqlSet->getSetCount();
  for (int n=0; n<dictCount; n++) {
    SQLSet *setNode = sqlSet->getSet(n);
    string keyName = setNode->getName();
    string keyValue;
    setNode->getValue()->toString(keyValue);
    trimSQLString(keyValue);
    dictionary.set(keyName, keyValue);
  }
  
  return true;
}

void uSQL::SQLProxy::trimSQLString(std::string &value)
{
  boost::trim_if(value, std::bind2nd(std::equal_to<char>(), '\"'));
}
