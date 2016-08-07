#pragma once

#include "ap_version.h"

#define THISFIRMWARE "APM:Copter V3.4-rc1"
#define FIRMWARE_VERSION 3,4,0, FIRMWARE_VERSION_TYPE_RC

#ifndef GIT_VERSION
#define FIRMWARE_STRING THISFIRMWARE
#else
#define FIRMWARE_STRING THISFIRMWARE " (" GIT_VERSION ")"
#endif
