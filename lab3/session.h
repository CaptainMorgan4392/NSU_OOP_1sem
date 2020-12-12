#pragma once

#include "Context.h"

class Session {
    Context ctx;
public:
    void start();
    static void printHelp();
};