#include "OperationFactory.h"

OperationFactory& OperationFactory::getInstance() noexcept {
    static OperationFactory factory;
    return factory;
}

IOperation* OperationFactory::createInstance(const std::string& id) const {
    auto i = _makers.find(id);
    if (i == _makers.end()) {
        throw NoSuchOperation();
    }
    IOperationMaker *maker = i->second;
    return (maker -> create(id));
}

void OperationFactory::RegisterMaker(const std::string &operationName, IOperationMaker *maker) {
    if (_makers.find(operationName) != _makers.end()) {
        throw InvalidRegistration();
    }
    _makers[operationName] = maker;
}


