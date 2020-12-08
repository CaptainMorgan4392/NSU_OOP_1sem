#pragma once
#include "AllOp.h"
#include "OperationMaker.h"

class OperationFactory {

public:
    static OperationFactory getInstance();

    std::unique_ptr<Operation> createInstance(const std::string&);
};

OperationFactory OperationFactory::getInstance() {
    OperationFactory factory{};
    return factory;
}

std::unique_ptr<Operation> OperationFactory::createInstance(const std::string& id) {
    OperationMaker opMaker{};
    return std::unique_ptr<Operation>(opMaker.getOp(id));
}

