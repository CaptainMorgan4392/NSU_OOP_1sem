#pragma once

#include <fstream>
#include <sstream>
#include <tuple>
#include <type_traits>

namespace TupleReader {
    template <class T>
    T convert(std::string &s, char columnSeparator = ',', char guard = '\"') {
        T t;
        std::stringstream ss(s);
        ss >> t;

        return t;
    }

    template <>
    std::string convert(std::string &s, char columnSeparator, char guard) {
        std::string guarded;
        guarded += guard;
        guarded += columnSeparator;
        for (auto position = s.find(guarded); position != std::string::npos; position = s.find(guarded, position)) {
            std::string toReplase;
            toReplase += columnSeparator;
            s.replace(position, 2, toReplase);
            position += 1;
        }
        return s;
    }

    template<class Ch, class Tr, typename Type, unsigned BEGIN, unsigned END>
    struct TupleReader {
        static void read(std::basic_istream<Ch, Tr> &input, Type &value, char columnSeparator = ',', char guard = '\"', char lineSeparator = '\n') {
            std::string buffer;
            char charPrev = '\0';
            char charCur = input.get();
            while (!(charCur == ',' && charPrev != '"') && charCur != -1) {
                if (charCur != ' ') {
                    buffer += charCur;
                    charPrev = charCur;
                }
                charCur = input.get();
                if (charCur == -1) {
                    throw std::runtime_error("Wrong input format!");
                }
            }
            if (buffer.empty()) {
                throw std::runtime_error("Wrong input format!");
            }
            std::get<BEGIN>(value) = convert<typeof(std::get<BEGIN>(value))>(buffer, columnSeparator, guard);
            TupleReader<Ch, Tr, Type, BEGIN + 1, END>::read(input, value);
        }
    };

    template<class Ch, class Tr, typename Type, unsigned N>
    struct TupleReader<Ch, Tr, Type, N, N> {
        static void read(std::basic_istream<Ch, Tr> &input, Type &value, char columnSeparator = ',', char guard = '\"', char lineSeparator = '\n') {
            std::string buffer;
            std::getline(input, buffer, lineSeparator);
            if (buffer.empty()) {
                throw std::runtime_error("Wrong input format!");
            }
            std::get<N>(value) = convert<typeof(std::get<N>(value))>(buffer, columnSeparator, guard);
        }
    };

    template<class Ch, class Tr, typename... Types>
    void parse(std::basic_istream<Ch, Tr> &input,
               std::tuple<Types...> &value,
               char columnSeparator = ',',
               char guard = '\"',
               char lineSeparator = '\n') {
        try {
            TupleReader<Ch, Tr, std::tuple<Types...>, 0, sizeof...(Types) - 1>::read(input,
                                                                                     value,
                                                                                     columnSeparator,
                                                                                     guard,
                                                                                     lineSeparator);
        } catch (std::runtime_error& ex) {
            std::cerr << "Wrong input format!";
            exit(1);
        }
    }
}
