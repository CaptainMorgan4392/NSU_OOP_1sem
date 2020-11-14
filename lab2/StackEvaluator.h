#pragma once

#include "Evaluator.h"
#include <cmath>
#include <iostream>
#include <vector>

class StackEvaluator : public Evaluator {
    void add() override;

    void subtract() override;

    void multiply() override;

    void divide() override;

    void squareRoot() override;

    void print() override;

    void define(const std::string &name, const std::string &val) override;

    void pushInStack(const std::string& val);

    void popFromStack();
public:
    void evaluate() override;
};