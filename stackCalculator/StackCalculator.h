#pragma once

#include "Exceptions.h"
#include "Context.h"
#include <fstream>
#include <iostream>
#include <list>

class StackCalculator {
public:
    static double evaluate(std::istream& is);
};
