/******************************************************************
*
* uSQL for C++
*
* SQLOrder.cpp
*
* Copyright (C) Satoshi Konno 2011
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

#include <cybergarage/sql/node/SQLOrder.h>

const int uSQL::SQLOrder::UNKOWN = -1;
const int uSQL::SQLOrder::ASC = 0;
const int uSQL::SQLOrder::DESC = 1;

static const char *CgSQLOrderStrings[] = {
"ASC",
"DESC",
};

#define CgSQLOrderStringSize (sizeof(CgSQLOrderStrings)/sizeof(CgSQLOrderStrings[0]))

static const char *CgSQLOrderValueToString(int n)
{
	if (n < 0 || (CgSQLOrderStringSize - 1) < n)
    	return "?";
	return CgSQLOrderStrings[n];
}

static int CgSQLOrderStringToValue(const std::string &value)
{
	for (int n=0; n<CgSQLOrderStringSize; n++) {
    	if (value.compare(CgSQLOrderStrings[n]) == 0)
        	return n;
    }
    return uSQL::SQLOrder::UNKOWN;
}

void uSQL::SQLOrder::setOrder(const std::string &order)
{
	setOrder(CgSQLOrderStringToValue(order));
}

std::string &uSQL::SQLOrder::toString(std::string &buf) 
{
	buf = this->name;
    buf.append(" ");
    buf.append(CgSQLOrderValueToString(getOrder()));
    return buf;
}
    
