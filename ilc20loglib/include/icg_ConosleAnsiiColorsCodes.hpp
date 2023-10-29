#pragma once
#include <iostream>
#include <string>

#pragma warning(disable : 4114)
#pragma warning(disable : 4083)

struct RainbowColors {
    static const char* Reset;
    static const char* Red;
    static const char* Yellow;
    static const char* Green;
    static const char* Cyan;
    static const char* Blue;
    static const char* Magenta;
};

const const char* RainbowColors::Reset = "\x1B[0m";
const const char* RainbowColors::Red = "\x1B[31m";
const const char* RainbowColors::Yellow = "\x1B[33m";
const const char* RainbowColors::Green = "\x1B[32m";
const const char* RainbowColors::Cyan = "\x1B[36m";
const const char* RainbowColors::Blue = "\x1B[34m";
const const char* RainbowColors::Magenta = "\x1B[35m";

enum ilc20_avabileColors {
    Red,
    Yellow,
    Green,
    Cyan,
    Blue,
    Magenta
};