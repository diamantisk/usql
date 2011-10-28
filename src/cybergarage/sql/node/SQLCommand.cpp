/******************************************************************
*
* uSQL for C++
*
* SQLCommand.cpp
*
* Copyright (C) Satoshi Konno 2011
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

#include <cybergarage/sql/node/SQLCommand.h>

const int uSQL::SQLCommand::UNKOWN = -1;
const int uSQL::SQLCommand::SELECT = 0;
const int uSQL::SQLCommand::UPDATE = 1;
const int uSQL::SQLCommand::INSERT = 2;
const int uSQL::SQLCommand::DELETE = 3;
const int uSQL::SQLCommand::CREATE = 4;
const int uSQL::SQLCommand::DROP = 5;
