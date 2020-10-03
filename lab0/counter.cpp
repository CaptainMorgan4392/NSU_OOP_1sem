#include <iostream>
#include <vector>
#include "counter.h"

//Checking if current symbol is a letter
bool isletter(char c) {
    return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

//Function for comparison and sorting vector of pairs
bool comparePairs(const std::pair <std::string, int> & a, const std::pair <std::string, int> & b) {
    return a.second > b.second;
}

//Trying to create reading and writing file-streams
void Counter::openStreams() {
    try {
        fin.open(inputFileName);
        if (!fin) {
            throw "Input file not found";
        }

        fout.open(outputFileName);
        if (!fout) {
            throw "Output file not found";
        }
    } catch (const char* exception) {
        std::cout << exception;
        exit(1);
    }
}

//Counting words and saving quantity of them in the map
void Counter::readingAndCounting() {
    std::string newWord, currentLine;
    bool isReadAndNotWritten = false;
    bool isAllowedSymbol;

    while (getline(fin, currentLine)) {
       for (int i = 0; i < currentLine.size(); i++) {
           char curSymbol = currentLine[i];

           if (isletter(curSymbol) || isdigit(curSymbol)) {
               isReadAndNotWritten = true;
               isAllowedSymbol = true;
               newWord += curSymbol;
           } else {
               isAllowedSymbol = false;
           }

           if ((!isAllowedSymbol && isReadAndNotWritten) || (isAllowedSymbol && i == currentLine.size() - 1)) {
               totalRead++;
               wordCounter[newWord]++;
               newWord = "";
               isReadAndNotWritten = false;
           }
       }
    }
}

//Sorting map by value and writing it in the file
void Counter::parseIntoCsv() {
    std::map <std::string, int> :: iterator it;
    std::vector <std::pair <std::string, int> > sortedMapByValue;

    for (it = wordCounter.begin(); it != wordCounter.end(); it++) {
        std::pair <std::string, int> curPair {it -> first, it -> second};
        sortedMapByValue.push_back(curPair);
    }

    std::sort(sortedMapByValue.begin(), sortedMapByValue.end(), comparePairs);

    for (std::pair <std::string, int> &iterPair : sortedMapByValue) {
        fout << iterPair.first << ", " << iterPair.second << ", ";
        double percentPerWord = 100.0 * iterPair.second / totalRead;
        fout << percentPerWord << std::endl;
    }
}

//Closing file-streams
void Counter::closeStreams() {
    fin.close();
    fout.close();
}