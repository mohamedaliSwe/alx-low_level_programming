What is a Pointer in C?
A pointer is defined as a derived data type that can store the address of other C variables or a memory location. We can access and manipulate the data stored in that memory location using pointers.

As the pointers store the memory addresses, their size is independent of the type of data they are pointing to. This size of pointers only depends on the system architecture.

Syntax
The syntax of pointers is similar to the variable declaration in C, but we use the ( * ) dereferencing operator in the pointer declaration.

datatype * ptr;

where

ptr is the name of the pointer.
datatype is the type of data it is pointing to.
The above syntax is used to define a pointer to a variable. We can also define pointers to functions, structures, etc
