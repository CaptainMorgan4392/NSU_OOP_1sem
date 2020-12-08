#pragma once
#include "Operation.h"

class OperationMaker {
    std::map <std::string, Operation*> maker;

    void initMakers();
public:
    Operation* getOp(const std::string& command);
};

Operation* OperationMaker::getOp(const std::string &command) {
    initMakers();

    for (auto &it : maker) {
        auto toLowerCase = [command]() -> std::string {
            for (char i : command) {
                i = (char)tolower(i);
            }

            return command;
        }();

        if (toLowerCase == it.first) {
            return it.second;
        }
    }

    throw NoSuchOperation();
}

void OperationMaker::initMakers() {
    maker["define"] = new Define();
    maker["add"] = new Add();
    maker["subtract"] = new Subtract();
    maker["multiply"] = new Multiply();
    maker["divide"] = new Divide();
    maker["sqrt"] = new Sqrt();
    maker["push"] = new Push();
    maker["pop"] = new Pop();
    maker["print"] = new Print();
}