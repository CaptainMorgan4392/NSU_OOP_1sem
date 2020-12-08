#pragma once
#include "Operation.h"
#include <cmath>

class Sqrt : public Operation {
public:
    void execute(std::list<std::string>& args, Context & ctx) override {
        if (ctx.operands.empty()) {
            throw OutOfParameters();
        }

        double first = ctx.operands.top();
        ctx.operands.pop();

        if (first < 0) {
            throw NegativeParameter();
        }

        ctx.operands.push(sqrt(first));
    }
};
