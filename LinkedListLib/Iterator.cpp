#include "LinkedList.h"

LinkedList::iterator::iterator() {
    element = nullptr;
}

LinkedList::iterator::iterator(Node* el) {
    element = el;
    value = el -> value;
}

LinkedList::iterator &LinkedList::iterator::operator=(const LinkedList::iterator &other) {
    this -> element = other.element;
    return *this;
}

bool LinkedList::iterator::operator!=(const LinkedList::iterator &other) const {
    return this -> element != other.element;
}

bool LinkedList::iterator::operator==(const LinkedList::iterator &other) const {
    return this -> element == other.element;
}

value_type &LinkedList::iterator::operator*() {
    return this -> element -> value;
}

value_type *LinkedList::iterator::operator->() {
    return &(this -> element -> value);
}

LinkedList::iterator &LinkedList::iterator::operator++() {
    this -> element = element -> next;
    return *this;
}

const LinkedList::iterator LinkedList::iterator::operator++(int) {
    LinkedList::iterator it;
    it.element = this -> element;
    this -> element = element -> next;

    return it;
}

LinkedList::iterator &LinkedList::iterator::operator--() {
    this -> element = element -> prev;
    return *this;
}

const LinkedList::iterator LinkedList::iterator::operator--(int) {
    LinkedList::iterator it;
    it.element = this -> element;
    this -> element = element -> prev;

    return it;
}

LinkedList::iterator LinkedList::begin() {
    return LinkedList::iterator(head);
}

LinkedList::iterator LinkedList::end() {
    return LinkedList::iterator(tail);
}

LinkedList::iterator LinkedList::iterator::erase(LinkedList::iterator position) {
    LinkedList::iterator before = --position;
    ++position;
    LinkedList::iterator after = ++position;
    --position;

    before.element -> next = after.element;
    after.element -> prev = before.element;

    delete position.element;

    return before;
}

LinkedList::iterator LinkedList::iterator::erase(LinkedList::iterator begin, LinkedList::iterator end) {
    for (LinkedList::iterator it = begin; it != end; it++) {
        it = erase(it);
    }

    return end;
}

LinkedList::iterator LinkedList::iterator::insert(LinkedList::iterator before, const value_type &value) {
    Node* newNode = new Node(value);

    LinkedList::iterator after = before;
    after++;
    newNode -> prev = before.element;
    newNode -> next = after.element;

    before.element -> next = newNode;
    after.element -> prev = newNode;


    return LinkedList::iterator(newNode);
}
