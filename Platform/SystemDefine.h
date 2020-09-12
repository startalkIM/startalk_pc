﻿//
// Created by cc on 2019-02-25.
//

#ifndef QTALK_V2_SYSTEMDEFINE_H
#define QTALK_V2_SYSTEMDEFINE_H

#include <string>
#include <sstream>
#include <iostream>
#include "platform_global.h"

#define DB_VERSION 100014

#if defined(_STARTALK)
#define GLOBAL_INTERNAL_VERSION 200009
#define GLOBAL_VERSION "build-2.0.009"
#elif defined(_QCHAT)
#define GLOBAL_INTERNAL_VERSION  200011
#define GLOBAL_VERSION  "2.0.011W"
#else
#define GLOBAL_INTERNAL_VERSION 20001005
#define GLOBAL_VERSION "build-2.1.005"
#endif // !QCHAT

#ifndef _WINDOWS
#define APPLICATION_VERSION "2.0 "  GLOBAL_VERSION
#else
#ifdef PLATFORM_WIN32
#define APPLICATION_VERSION "2.0 Windows(x86) " GLOBAL_VERSION
#else
#define APPLICATION_VERSION "2.0 Windows(x64) " GLOBAL_VERSION
#endif // PLATFORM_WNI32
#endif // _WINDOWS

time_t PLATFORMSHARED_EXPORT build_time();

#endif //QTALK_V2_SYSTEMDEFINE_H
