#pragma once

#include <map>
#include <string>
#include <fstream>
#include <algorithm>

class Counter {
    std::ifstream fin;
    std::ofstream fout;
    int totalRead = 0;
    std::string inputFileName;
    std::string outputFileName;
    std::map <std::string, int> wordCounter;

public:
    Counter(const std::string &input, const std::string &output) {
        inputFileName = input;
        outputFileName = output;
    }

    void openStreams();
    void readingAndCounting();
    void parseIntoCsv();
    void closeStreams();
};

