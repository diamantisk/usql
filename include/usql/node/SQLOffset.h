/******************************************************************
*
* uSQL for C++
*
* Copyright (C) Satoshi Konno 2012
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

#ifndef CG_USQL_SQLOFFSET_H
#define CG_USQL_SQLOFFSET_H

#include <usql/SQLNode.h>

namespace uSQL {

class SQLOffset : public SQLNode {

public:

  SQLOffset() {
    setType(OFFSET);
  }
  
  const char *getTypeName() {
    return "SQLOffset";
  }
  
  std::string &toString(std::string &buf) {
    std::ostringstream oss;
    std::string childNodeStr;
    oss << "OFFSET " << childNodesToString(childNodeStr);
    buf = oss.str();
    return buf;
  }
};

}

#endif
