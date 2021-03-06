/******************************************************************
*
* uSQL for C++
*
* Copyright (C) Satoshi Konno 2012
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

#ifndef _USQL_UNQLPARSER_H_
#define _USQL_UNQLPARSER_H_

#include <usql/SQLParser.h>

namespace uSQL {

class UnQLParser  : public SQLParser {

public:

  UnQLParser();

  bool parse(const std::string &queryString);
};

}

#endif
