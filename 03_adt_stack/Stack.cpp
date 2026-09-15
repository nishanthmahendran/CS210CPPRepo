// TASK 03 -- The Stack ADT's implementation
//
// This is where "how" lives. We chose std::vector as the backing
// storage: push_back is our push, back() is our top, pop_back() is our
// pop. A student could rewrite this whole file to use a raw fixed-size
// array instead, and as long as push/pop/top/isEmpty/size still behave
// the same way, nothing calling this class would ever notice.

#include "Stack.h"
#include <iostream>

Stack::Stack() {
    topIndex = -1;
}

void Stack::push(int value) {
    if (isFull()) {
        std::cout << "Cannot push because stack is full" << std::endl;
        return;
    }
    topIndex++;
    data[topIndex] = value;
}

int Stack::pop() {
    if (isEmpty()) {
        std::cout << "Cannot pop because stack is empty" << std::endl;
        return -1;
    }

    int removedValue = data[topIndex];
    topIndex--;
    return removedValue;
}

int Stack::peek() const {
    if (isEmpty()) {
        std::cout << "Cannot peek because stack is empty" << std::endl;
        return -1;
    }
    return data[topIndex];
    // undefined if empty -- callers should check isEmpty() first. We'll
    // harden this kind of thing later in the course.
}

bool Stack::isEmpty() const {
    return topIndex == -1;
}

bool Stack::isFull() const {
    return topIndex == 99;
}
int Stack::size() const {
    return topIndex + 1;
}
