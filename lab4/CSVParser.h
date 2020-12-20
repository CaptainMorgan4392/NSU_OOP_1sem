#pragma once
#include <fstream>
#include <tuple>
#include <memory>
#include <sstream>

#include "TupleParser.h"

template<typename ...Args>
class CSVParser;

template<typename ...Args>
class CSVIterator : std::iterator<std::input_iterator_tag, std::tuple<Args...>> {
    friend CSVParser<Args...>;

    size_t iteration;
    unsigned long offset;
    std::shared_ptr<std::tuple<Args...>> currentTuple;
    std::ifstream &input;
    bool isEnd;

    char lineSeparator;
    char columnSeparator;
    char guard;

public:
    CSVIterator() = delete;
    CSVIterator(const CSVIterator &other) : input(other.input),
                                            currentTuple(other.currentTuple),
                                            isEnd(other.isEnd),
                                            iteration(other.iteration),
                                            lineSeparator(other.lineSeparator),
                                            columnSeparator(other.columnSeparator),
                                            guard(other.guard),
                                            offset(other.offset){};

public:
    bool operator!=(CSVIterator const &other) const {
        return this->isEnd != other.isEnd;
    };

    typename CSVIterator<Args...>::reference operator*() {
        return *this->currentTuple;
    };

    CSVIterator<Args...> &operator++() {
        if (this->input.eof() || this->isEnd) {
            this->isEnd = true;
            return *this;
        }
        std::string buffer;
        input.seekg(offset, std::ios::beg);
        std::getline(this->input, buffer, this->lineSeparator);
        this->iteration++;
        std::stringstream ss;
        ss << buffer;
        offset = input.tellg();
        TupleReader::parse(ss, *currentTuple, this->columnSeparator, this->guard, this->lineSeparator);
        return *this;
    };

private:
    explicit CSVIterator(std::ifstream &fin,
                         size_t skipped,
                         bool END,
                         char line_sep,
                         char column_sep,
                         char guard,
                         unsigned long offset)
            : input(fin), isEnd(END), iteration(skipped), lineSeparator(line_sep), columnSeparator(column_sep), guard(guard), offset(offset) {
        if (!this->isEnd) {
            currentTuple = std::make_shared<std::tuple<Args...>>();
            ++*this;
        }
    };
};

template<typename ...Args>
class CSVParser {
    size_t skip;
    char lineSeparator;
    char columnSeparator;
    char guard;
    std::ifstream &input;

public:
    CSVParser() = delete;
    explicit CSVParser(std::ifstream &fin,
                       size_t skip = 0,
                       char line_sep = '\n',
                       char column_sep = ',',
                       char guard = '\"') : input(fin),
                                            skip(skip),
                                            lineSeparator(line_sep),
                                            columnSeparator(column_sep),
                                            guard(guard) {

        for (size_t i = 0; i < skip; ++i) {
            std::string tmp;
            std::getline(this->input, tmp, lineSeparator);
        }
    };

    CSVIterator<Args...> begin() {
        return CSVIterator<Args...>(input, skip, false, this->lineSeparator, this->columnSeparator, this->guard, 0);
    };

    CSVIterator<Args...> end() {
        return CSVIterator<Args...>(input, 0, true, this->lineSeparator, this->columnSeparator, this->guard, UINT32_MAX);
    };
};
