#pragma once
#include <iostream>

class GameException : public std::exception {
protected:
    std::string msg;

public:
    explicit GameException(std::string _msg) {
        msg = std::move(_msg);
    }

    virtual std::string what() = 0;
};
