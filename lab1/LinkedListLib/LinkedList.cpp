#include "LinkedList.h"

LinkedList::LinkedList() {
    head = tail = new Node(0);

    head -> prev = head -> next = tail;
    tail -> prev = tail -> next = head;
}

LinkedList::LinkedList(const LinkedList &other) {
    head = tail = new Node();

    for (Node* cur = other.head; cur != other.tail; cur = cur -> next) {
        push_back(cur -> value);
    }
}

LinkedList::LinkedList(LinkedList &&other) noexcept {
    head = tail = new Node();

    *this = other;

    other.head = other.tail = nullptr;
}

LinkedList::~LinkedList() {
    clear();

    delete tail;
}

LinkedList &LinkedList::operator=(const LinkedList &other) {
    clear();

    for (Node* cur = other.head; cur != other.tail; cur = cur -> next) {
        push_back(cur -> value);
    }

    return *this;
}

LinkedList &LinkedList::operator=(LinkedList &&other) noexcept {
    head = other.head;
    tail = other.tail;

    other.head = nullptr;
    other.tail = nullptr;

    return *this;
}

LinkedList &LinkedList::operator+=(const LinkedList &other) {
    for (Node *cur = other.head; cur != other.tail; cur = cur->next) {
        push_back(cur->value);
    }

    return *this;
}

int LinkedList::size() const {
    int capacity = 0;
    for (Node* cur = head; cur != tail; cur = cur -> next) {
        capacity++;
    }

    return capacity;
}

bool LinkedList::empty() const {
    return tail == head;
}

int LinkedList::remove(const value_type &value) {
    if (empty()) {
        throw std::logic_error("The list is empty!");
    }

    bool found = false;
    int quantity = 0;
    for (Node* cur = head; cur != tail; cur = cur -> next) {
        if (cur -> value == value) {
            quantity++;
            found = true;

            Node* before = cur -> prev;
            Node* after = cur -> next;

            before -> next = after;
            after -> prev = before;

            delete cur;
            cur = before;
        }
    }

    return found ? value : -1;
}

void LinkedList::clear() {
    while (!empty()) {
        pop_front();
    }
}

value_type &LinkedList::front() {
    if (empty()) {
        throw std::logic_error("The list is empty!");
    }
    return head -> value;
}

const value_type &LinkedList::front() const {
    if (empty()) {
        throw std::logic_error("The list is empty!");
    }
    return static_cast<const value_type&>(head -> value);
}

value_type &LinkedList::back() {
    if (empty()) {
        throw std::logic_error("The list is empty!");
    }
    return tail -> prev -> value;
}

const value_type &LinkedList::back() const {
    if (empty()) {
        throw std::logic_error("The list is empty!");
    }
    return static_cast<const value_type&>(tail -> value);
}

void LinkedList::pop_back() {
    if (empty()) {
        throw std::logic_error("The list is empty!");
    }

    tail = tail -> prev;
    delete tail -> next;
}

void LinkedList::pop_front() {
    if (empty()) {
        throw std::logic_error("The list is empty!");
    }

    head = head -> next;
    delete head -> prev;
}

void LinkedList::push_in_empty(const value_type & value) {
    Node* newNode = new Node(value);

    head = newNode;

    head -> next = tail;
    head -> prev = tail;
    tail -> prev = head;
    tail -> next = head;
}

void LinkedList::push_back(const value_type &value) {
    if (empty()) {
        push_in_empty(value);
        return;
    }

    Node* newNode = new Node(value);

    Node* before = tail -> prev;
    before -> next = tail -> prev = newNode;

    newNode -> next = tail;
    newNode -> prev = before;
}

void LinkedList::push_front(const value_type &value) {
    if (empty()) {
        push_in_empty(value);
        return;
    }

    Node* newNode = new Node(value);
    tail -> next = head -> prev = newNode;

    newNode -> next = head;
    newNode -> prev = tail;

    head = newNode;
}

bool operator!=(const LinkedList &left, const LinkedList &right) {
    return !(left == right);
}

bool operator==(const LinkedList &left, const LinkedList &right) {
    LinkedList::const_iterator it1 = left.cbegin();
    LinkedList::const_iterator it2 = right.cbegin();

    for (; it1 != left.cend() && it2 != right.cend(); it1++, it2++) {
        if (it1.value != it2.value) {
            return false;
        }
    }

    if (it1 != left.cend() || it2 != right.cend()) {
        return false;
    }

    return true;
}

LinkedList operator+(const LinkedList &left, const LinkedList &right) {
    LinkedList newList;
    for (LinkedList::const_iterator it = left.cbegin(); it != left.cend(); it++) {
        newList.push_back(*it);
    }

    for (LinkedList::const_iterator it = right.cbegin(); it != right.cend(); it++) {
        newList.push_back(*it);
    }

    return newList;
}
