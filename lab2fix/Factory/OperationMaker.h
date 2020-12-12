#pragma once

#include "../Interfaces/IOperationMaker.h"
#include "OperationFactory.h"

template <typename T>

class OperationMaker : public IOperationMaker{
public:
    explicit OperationMaker(const std::string &blockName){
        OperationFactory::getInstance().RegisterMaker(blockName, this);
    }

    IOperation *create(const std::string &blockName) const override {
        return new T;
    }
};
