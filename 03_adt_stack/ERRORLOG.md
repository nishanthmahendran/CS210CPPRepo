# Error Log

## September 14, 2026

Exact compiler error:

C:\Users\Nishanth\CLionProjects\CS210CPPRepo\03_adt_stack\Stack.cpp:15:6: error: no declaration matches 'void Stack::pop()'

What caused it:

This happened because Stack.h said that pop() returned an int, but Stack.cpp still had pop() written as a void function. The declaration and the function body did not match.

How I fixed it:

I changed the function in Stack.cpp from void Stack::pop() to int Stack::pop(). I also made it return the value that was removed. If the stack is empty, it returns -1.

## September 15, 2026

Exact compiler error:

C:\Users\Nishanth\CLionProjects\CS210CPPRepo\03_adt_stack\Stack.cpp:12:14: error: definition of implicitly-declared 'Stack::Stack()'

What caused it:

This happened because I created the Stack constructor in Stack.cpp, but I forgot to declare it inside the public section of Stack.h.

How I fixed it:

I added Stack(); under public in Stack.h. This made the constructor declaration match the constructor body in Stack.cpp.
