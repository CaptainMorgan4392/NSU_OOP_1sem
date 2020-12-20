#include <iostream>
#include <tuple>

#include "TuplePrinter.h"
#include "CSVParser.h"

int main() {
    std::ifstream file("test.txt");
    if (!file.is_open()) {
        throw std::runtime_error("No file");
    }

    CSVParser<int, std::string, int> parser(file, 0, ';');

    for (const auto &rs : parser) {
        std::cout << rs << std::endl;
    }

    file.close();
}
