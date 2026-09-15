// TASK 03 -- Using the Stack ADT
//
// Read this file without ever opening Stack.cpp. You should still be
// able to tell exactly what this program does. That's the ADT promise
// in action: the header alone is enough documentation to use the type.

#include <iostream>
#include "Stack.h"


int main() {
    Stack stack;

    std::cout << "Is empty? "
              << (stack.isEmpty() ? "yes" : "no") << std::endl;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Stack size after pushing: "
              << stack.size() << std::endl;
    std::cout << "Value at Top: "
              << stack.peek() << std::endl;

    int removedValue = stack.pop();

    std::cout << "Popped value: "
              << removedValue << std::endl;
    std::cout << "New top value: "
              << stack.peek() << std::endl;
    std::cout << "Stack size after popping: "
              << stack.size() << std::endl;


    stack.pop();
    stack.pop();

    std::cout << "Is stack empty now? "
              << (stack.isEmpty() ? "yes" : "no") << std::endl;

    //This will show how my stack will handle a pop that is invalid
    int emptyResult = stack.pop();
    std::cout << "Value returned from empty pop: "
              << emptyResult << std::endl;

    Stack fullStack;

    for (int i = 0; i < 100; i++) {
        fullStack.push(i);
    }

    std::cout << "Is the second stack full? "
              << (fullStack.isFull() ? "yes" : "no") << std::endl;

    // This value should not be added because the stack is full.
    fullStack.push(100);

    std::cout << "Size after the extra push attempt: "
              << fullStack.size() << std::endl;

    return 0;
}

// TRY IT LIVE: ask the class "what data structure is UNDER this stack?"
// Nobody can answer just from reading this file, and that's correct --
// it's not their business. Then open Stack.h to reveal it's a vector.
