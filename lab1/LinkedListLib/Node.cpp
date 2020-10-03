#include "LinkedList.h"

LinkedList::Node::Node() {
    value = -1;

    prev = nullptr;
    next = nullptr;
}

LinkedList::Node::Node(value_type &val) {
    value = val;

    prev = nullptr;
    next = nullptr;
}

LinkedList::Node::Node(const value_type &val) {
    value = val;

    prev = nullptr;
    next = nullptr;
}

