#pragma once
#include <stdexcept>
#include <string>

class EvaluatorException : public std::exception {
    std::string msg {"Smth gone wrong"};

protected:
    explicit EvaluatorException(const std::string& _msg) {
        msg = _msg;
    }

public:
    EvaluatorException() = default;

    const char * what() const noexcept override {
        return msg.c_str();
    }
};
