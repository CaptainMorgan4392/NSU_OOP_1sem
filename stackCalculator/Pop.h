#pragma once
#include "Operation.h"

class Pop : public Operation {
public:
    void execute(std::list<std::string>& args, Context & ctx) override {
        if (ctx.operands.empty()) {
            throw OutOfParameters();
        }

        ctx.operands.pop();
    }
};
