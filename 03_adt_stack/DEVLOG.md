# Development Log

## September 11, 2026

Today I worked on Stack.h. I changed the old vector setup into the fixed array required by the assignment. I added data[100] and topIndex as the private variables. I also made sure all the required functions were declared in the header without putting any function bodies there. I decided to use topIndex to keep track of the top value because it made the stack easier to understand.

## September 14, 2026

Today I worked on Stack.cpp. I wrote the function bodies for push(), pop(), peek(), isEmpty(), isFull(), and size(). I decided to set topIndex to -1 when the stack is created because -1 clearly shows that the stack is empty. I also decided that pop() and peek() would print a message and return -1 when the stack is empty. If push() is called when the stack is full, it prints a message and does not add the value. I chose this because we have not learned exceptions yet, and it keeps the program from using an invalid array position.

## September 15, 2026

Today I worked on main.cpp and tested the stack. I pushed several values, used peek(), popped values, and printed the size. I also tested what happens when the stack is empty and when it reaches its limit of 100 values. At first, I waited until late in the process to troubleshoot, so I had multiple errors at the same time. If I could do it again, I would build and run the program more often while working. That would help me catch each error right after I caused it and make the errors easier to fix.
