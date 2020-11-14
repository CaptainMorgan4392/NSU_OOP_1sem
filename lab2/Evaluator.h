#pragma once

#include "EvaluatorException.h"
#include <map>
#include <stack>

class Evaluator {
    struct Context {
        std::map <std::string, double> defines;
        std::stack <double> operands;

        std::pair <double, double> getPairOperands();

        double getOperand();
    };

protected:
    Context ctx;

    virtual void add() = 0;

    virtual void subtract() = 0;

    virtual void multiply() = 0;

    virtual void divide() = 0;

    virtual void squareRoot() = 0;

    virtual void print() = 0;

    virtual void define(const std::string& name, const std::string &val) = 0;
public:
    virtual void evaluate() = 0;
};
