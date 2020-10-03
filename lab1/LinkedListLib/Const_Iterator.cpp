#include "LinkedList.h"

LinkedList::const_iterator::const_iterator() {
    constElement = nullptr;

}
LinkedList::const_iterator::const_iterator(LinkedList::Node *el) {
    constElement = el;
    value = el -> value;
}

LinkedList::const_iterator &LinkedList::const_iterator::operator=(const LinkedList::const_iterator &other) {
    this -> constElement = other.constElement;
    return *this;
}

bool LinkedList::const_iterator::operator!=(const LinkedList::const_iterator &other) const {
    return this -> constElement != other.constElement;
}

bool LinkedList::const_iterator::operator==(const LinkedList::const_iterator &other) const {
    return this -> constElement != other.constElement;
}

const value_type &LinkedList::const_iterator::operator*() const {
    return static_cast<const value_type&>(this -> constElement -> value);
}

const value_type *LinkedList::const_iterator::operator->() const {
    return &(this -> constElement -> value);
}

LinkedList::const_iterator &LinkedList::const_iterator::operator++() {
    this -> constElement = constElement -> next;
    return *this;
}

const LinkedList::const_iterator LinkedList::const_iterator::operator++(int) {
    LinkedList::const_iterator it;
    it.constElement = this -> constElement;
    this -> constElement = constElement -> next;

    return it;
}

LinkedList::const_iterator &LinkedList::const_iterator::operator--() {
    this -> constElement = constElement -> prev;
    return *this;
}

const LinkedList::const_iterator LinkedList::const_iterator::operator--(int) {
    LinkedList::const_iterator it;
    it.constElement = this -> constElement;
    this -> constElement = constElement -> prev;

    return it;
}

LinkedList::const_iterator LinkedList::cbegin() const {
    return LinkedList::const_iterator(head);
}

LinkedList::const_iterator LinkedList::cend() const {
    return LinkedList::const_iterator(tail);
}

