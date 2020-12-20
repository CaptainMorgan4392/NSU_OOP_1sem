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

    auto it1 = parser.begin();
    std::cout << *it1 << std::endl;

    ++it1;

    auto it2 = parser.begin();
    std::cout << *it2 << std::endl;

    ++it2;

    std::cout << *it1 << std::endl;

    for (const auto &rs : parser) {
        std::cout << rs << std::endl;
    }

    file.close();
}
