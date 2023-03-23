# C - Debugging

Debugging is the process of finding and fixing errors in software that prevents it from running correctly.

## Header File :file_folder:

* [main.h](./holberton.h): Header file containing prototypes for all functions written in the project.

| File                     | Prototype                        |
| ------------------------ | -------------------------------- |
| `0-main.c`               | `int positive_or_negative(i);  ;`|
| `1-main.c`               | `int _isdigit(int c);`           |
| `2-largest_number.c`     | `int mul(int a, int b);`         |
| `3-print_remaining_days.c`| `void print_numbers(void);`      |


## Tasks :page_with_curl:

* **0. Multiple mains**
  * [0-main.c](./0-main.c): Based on the main.c file above, create a file named 0-main.c. 
  * This file must test that the function positive_or_negative() gives the correct output when given a case of 0.
  * You are not coding the solution / function, you’re just testing it! However, you can adapt your function from 0x01.     C - Variables, if, else, while - Task #0 to compile with this main file to test locally.

* **1. Like, comment, subscribe**
  * [1-main.c](./1-main.c): C function that checks for a digit (`0` through `9`).
  * Returns `1` if the character is a digit, `0` otherwise.

* **2. 0 > 972?**
  * [2-largest_number.c](./2-largest_number.c): C function that multiplies two integers. Returns the value of
  * the multiplication.

* **3. Leap year**
  * [3-print_numbers.c](./3-print_numbers.c): Fix the `print_remaining_days()` function so that the output works
  * correctly for all dates and all leap years.
