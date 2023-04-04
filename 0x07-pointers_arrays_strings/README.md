# C - Even more pointers, arrays and strings

A pointer points to a location in memory and is thus used to store the address of variables.
So, when we define a pointer to a pointer. The first pointer is used to store the address of
the variable.The second pointer is used to store the address of the first pointer. That is
why they are also known as `double-pointers`.

We can use a pointer to a pointer to change the values of normal pointers or create a 
variable-sized 2-D array. A double pointer occupies the same amount of space in the memory 
stack as a normal pointer.


## Helper File :ok_hand:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all functions written
in the project.

| File         | Prototype                                               |
| ------------ | ------------------------------------------------------- |
| `0-memset.c` | `char *_memset(char *s, char b, unsigned int n);`       |
