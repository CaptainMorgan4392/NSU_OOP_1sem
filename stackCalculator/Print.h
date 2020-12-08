#pragma once
#include "Operation.h"

class Print : public Operation {
public:
    void execute(std::list<std::string>& args, Context & ctx) override {
        if (ctx.operands.empty()) {
            throw OutOfParameters();
        }

        std::cout << ctx.operands.top();
    }
};
