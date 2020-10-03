#include "counter.cpp"

int main(int argc, char* argv[]) {
    Counter newCounter {argv[1], argv[2]};

    newCounter.openStreams();
    newCounter.readingAndCounting();
    newCounter.parseIntoCsv();
    newCounter.closeStreams();

    return 0;
}