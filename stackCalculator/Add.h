#pragma once
#include "Operation.h"

class Add : public Operation {
public:
    void execute(std::list<std::string>& args, Context & ctx) override {
        if (ctx.operands.size() < 2) {
            throw OutOfParameters();
        }

        double first = ctx.operands.top();
        ctx.operands.pop();
        double second = ctx.operands.top();
        ctx.operands.pop();

        ctx.operands.push(first + second);
    }
};
