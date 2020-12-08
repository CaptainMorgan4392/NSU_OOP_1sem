#pragma once
#include "Operation.h"

class Divide : public Operation {
public:
    void execute(std::list<std::string>& args, Context & ctx) override {
        if (ctx.operands.size() < 2) {
            throw OutOfParameters();
        }

        double first = ctx.operands.top();
        ctx.operands.pop();
        double second = ctx.operands.top();
        ctx.operands.pop();

        if (second == 0) {
            throw DivisionByZero();
        }

        ctx.operands.push(first / second);
    }
};
