#pragma once

#include <iostream>
#include <tuple>

template<class Ch, class Tr, typename Type, unsigned BEGIN, unsigned END>
struct TuplePrinter {
    static void print(std::basic_ostream<Ch, Tr> &out, const Type &value) {
        out << std::get<BEGIN>(value) << ", ";
        TuplePrinter<Ch, Tr, Type, BEGIN + 1, END>::print(out, value);
    }
};

template<class Ch, class Tr, typename Type, unsigned N>
struct TuplePrinter<Ch, Tr, Type, N, N> {
    static void print(std::basic_ostream<Ch, Tr> &out, const Type &value) {
        out << std::get<N>(value);
    }
};

template<class Ch, class Tr, typename... Types>
std::basic_ostream<Ch, Tr> &operator<<(std::basic_ostream<Ch, Tr> &out,
                                       const std::tuple<Types...> &value) {
    TuplePrinter<Ch, Tr, std::tuple<Types...>, 0, sizeof...(Types) - 1>::print(out, value);
    return out;
}
