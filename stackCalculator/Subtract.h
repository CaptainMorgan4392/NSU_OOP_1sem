#pragma once
#include "Operation.h"

class Subtract : public Operation {
public:
    void execute(std::list<std::string>& args, Context & ctx) override {
        if (ctx.operands.size() < 2) {
            throw OutOfParameters();
        }

        int first = ctx.operands.top();
        ctx.operands.pop();
        int second = ctx.operands.top();
        ctx.operands.pop();

        ctx.operands.push(first - second);
    }
};
