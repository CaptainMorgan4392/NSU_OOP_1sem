#include "StackEvaluator.h"
#include "FileNotFoundException.h"

int main(int argc, char** argv) {
    Evaluator* evaluator = new StackEvaluator();

    try {
        if (argc > 1 && fopen(argv[1], "r") == nullptr) {
            throw FileNotFoundException();
        }

        freopen(argv[1], "r", stdin);
    } catch (FileNotFoundException &ex) {
        std::cerr << ex.what() << std::endl;
        std::cerr << "Enter input in console: " << std::endl;
    }

    evaluator -> evaluate();

    return 0;
}
