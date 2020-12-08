#pragma once
#include "Operation.h"

class Push : public Operation {
public:
    void execute(std::list<std::string>& args, Context & ctx) override {
        if (args.empty()) {
            throw WrongInput();
        }

        std::string id = args.front();
        auto isNumber = [id]() -> bool {
            for (char c : id) {
                if (!isdigit(c)) {
                    return false;
                }
            }

            return true;
        }();

        if (isNumber) {
            ctx.operands.push(atof(id.c_str()));
            return;
        } else if (ctx.defines.find(id) != ctx.defines.end()) {
            ctx.operands.push(ctx.defines[id]);
            return;
        }

        throw WrongInput();
    }
};
