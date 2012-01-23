/******************************************************************
*
* uSQL for C++
*
* UnQLParser.h
*
* Copyright (C) Satoshi Konno 2012
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

#ifndef CG_USQL_UNQLPARSER_H
#define CG_USQL_UNQLPARSER_H

#include <cybergarage/sql/SQLParser.h>

namespace uSQL {

class UnQLParser  : public SQLParser {

public:

	UnQLParser();

	bool parse(const std::string &queryString);
};

}

#endif
