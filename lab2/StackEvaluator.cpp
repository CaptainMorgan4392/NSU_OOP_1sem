#include "StackEvaluator.h"
#include "DivisionByZero.h"
#include "NegativeParameter.h"
#include "StringFormat.h"
#include "OutOfParameters.h"
#include "NumberFormatException.h"
#include "WrongUsage.h"
#include "ForbiddenValue.h"
#include <cstdlib>

const std::vector <std::string> commandLiterals = {
        "add",
        "subtract",
        "multiply",
        "divide",
        "sqrt",
        "print",
        "define",
        "push",
        "pop"
};

std::vector<std::string> splitString(const std::string& toSplit) {
    std::vector <size_t> indexesOfWhitespaces;
    std::vector <std::string> arrOfStrings;

    int last = -1;
    for (size_t i = 0; i < toSplit.size(); ++i) {
        if (toSplit[i] == ' ') {
            arrOfStrings.push_back(toSplit.substr(last + 1, i - last - 1));
            last = i;
        }
    }

    if (last != toSplit.size() - 1) {
        arrOfStrings.push_back(toSplit.substr(last + 1));
    }

    return arrOfStrings;
}

bool notValidValue(const std::string& name, bool mustBeNumber) {
    if (mustBeNumber) {
        try {
            double x = atof(name.c_str());
        } catch (std::invalid_argument &ex) {
            return true;
        }
    } else for (char cur : name) {
        if (isdigit(cur)) {
            return true;
        }
    }

    return false;
}

int compareActionToKey(const std::string& word) {
    for (char c : word) {
        tolower(c);
    }

    for (int i = 0; i < commandLiterals.size(); ++i) {
        if (word == commandLiterals[i]) {
            return i + 1;
        }
    }

    return -1;
}

void StackEvaluator::evaluate() {
    std::string curCommand;
    int currentLine = 1;

    while (getline(std::cin, curCommand)) {
        try {
            std::vector <std::string> keyWords = splitString(curCommand);

            switch (compareActionToKey(keyWords[0])) {
                case 1:
                    add();
                    break;
                case 2:
                    subtract();
                    break;
                case 3:
                    multiply();
                    break;
                case 4:
                    divide();
                    break;
                case 5:
                    squareRoot();
                    break;
                case 6:
                    print();
                    break;
                case 7:
                    define(keyWords[1], keyWords[2]);
                    break;
                case 8:
                    pushInStack(keyWords[1]);
                    break;
                case 9:
                    popFromStack();
                    break;
                default:
                    throw WrongUsageException();
            }

            ++currentLine;
        } catch (EvaluatorException &ex) {
            std::cerr << ex.what() << " " << "Line " << currentLine << "." << std::endl;
            ++currentLine;
            continue;
        }
    }
}


void StackEvaluator::add() {
    std::pair <double, double> pair = ctx.getPairOperands();
    ctx.operands.push(pair.first + pair.second);
}

void StackEvaluator::subtract() {
    std::pair<double, double> pair = ctx.getPairOperands();
    ctx.operands.push(pair.first - pair.second);
}

void StackEvaluator::multiply() {
    std::pair<double, double> pair = ctx.getPairOperands();
    ctx.operands.push(pair.first * pair.second);
}

void StackEvaluator::divide() {
    std::pair<double, double> pair = ctx.getPairOperands();
    if (pair.second == 0) {
        pushInStack(std::to_string(pair.second));
        pushInStack(std::to_string(pair.first));

        throw DivisionByZeroException();
    }

    ctx.operands.push(pair.first / pair.second);
}

void StackEvaluator::squareRoot() {
    double op = ctx.getOperand();
    if (op < 0) {
        pushInStack(std::to_string(op));

        throw NegativeParameterException();
    }

    ctx.operands.push(sqrt(op));
}

void StackEvaluator::print() {
    if (ctx.operands.empty()) {
        throw OutOfParametersException();
    }

    std::cout << ctx.operands.top() << std::endl;
}

void StackEvaluator::define(const std::string& name, const std::string &val) {
    if (notValidValue(name, false)) {
        throw StringFormatException();
    } else if (notValidValue(val, true)) {
        throw NumberFormatException();
    }

    ctx.defines[name] = atof(val.c_str());
}

void StackEvaluator::pushInStack(const std::string &val) {
    if (ctx.defines.count(val)) {
        ctx.operands.push(ctx.defines[val]);
    } else if (!notValidValue(val, true)) {
        ctx.operands.push(atof(val.c_str()));
    } else {
        throw ForbiddenValueException();
    }
}

void StackEvaluator::popFromStack() {
    if (ctx.operands.empty()) {
        throw OutOfParametersException();
    }

    ctx.operands.pop();
}
