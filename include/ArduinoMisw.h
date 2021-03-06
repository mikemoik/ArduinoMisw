#pragma once

#include <Arduino.h>

// Nano Wrapper
#ifdef ARDUINO_AVR_NANO
#define A0 14
#define A1 15
#define A2 16
#define A3 17
#define A4 18
#define A5 19

#define D0 0
#define D1 1
#define D2 2
#define D3 3
#define D4 4
#define D5 5
#define D6 6
#define D7 7
#define D8 8
#define D9 9
#define D10 10
#define D11 11
#define D12 12
#define D13 13
#endif

#define PIN_LED   D7
#define PIN_ BUZZ D8

#ifndef DEBUG
#define DEBUG
#endif

// sensor
#define MISW_SENSOR_MIN_TEMP -50.0f // [*C]
#define MISW_SENSOR_MAX_TEMP +50.0f // [*C]
#define MISW_SENSOR_MIN_PRES 80000.0f // [Pa]
#define MISW_SENSOR_MAX_PRES 120000.0f // [Pa]
