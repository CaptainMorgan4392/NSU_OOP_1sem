#pragma once

class Operation {
public:
    virtual void execute(std::list <std::string>&, Context&) = 0;

    virtual ~Operation() = default;
};
