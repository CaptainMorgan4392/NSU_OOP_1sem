#include "Evaluator.h"
#include "OutOfParameters.h"

std::pair <double, double> Evaluator::Context::getPairOperands() {
    if (operands.size() < 2) {
        throw OutOfParametersException();
    }

    double first = operands.top();
    operands.pop();
    double second = operands.top();
    operands.pop();
    return {first, second};
}

double Evaluator::Context::getOperand() {
    if (operands.empty()) {
        throw OutOfParametersException();
    }

    double op = operands.top();
    operands.pop();
    return op;
}
