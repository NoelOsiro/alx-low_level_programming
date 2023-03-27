# C - More pointers, arrays and strings

In this project, I continued to practice using pointers, arrays and strings in C.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [main.h](./holberton.h): Header file containing prototypes for all
functions written in the project.

| File                 | Prototype                                                      |
| -------------------- | -------------------------------------------------------------- |
| `0-reset_to_98.c`    | `void reset_to_98(int *n);`                                    |
| `1-swap.c`           | `swap_int(int *a, int *b);`                                    |
| `2-strlen.c`         | `_strlen(char *s);`                                            |
| `4-rev_array.c`      | `void _puts(char *str);`                                       |
| `5-string_toupper.c` | `int _putchar(char c);`                                        |
| `6-cap_string.c`     | `void rev_string(char *s);`                                    |
| `7-leet.c`           | `void puts2(char *str);`                                       |
| `8-rot13.c`          | `void puts_half(char *str);`                                   |
| `100-print_number.c` | `void print_array(int *a, int n);`                             |
| `102-infinite_add.c` | `char *_strcpy(char *dest, char *src);`                        |
| `103-print_buffer.c` | `int _atoi(char *s)`                                           |

## Tasks :page_with_curl:

* **0. 98 Battery st.**
  * [0-reset_to_98.c](./0-reset_to_98.c): C  function that takes a pointer to an int as parameter.
    * Updates the value it points to to 98.

* **1. Don't swap horses in crossing a stream**
  * [1-swap.c](./1-swap.c): C function that  a function that swaps the values of two integers.  

* **2. This report, by its very length, defends itself against the risk of being ready**
  * [2-strlen.c](./2-strlen.c): C function Write a function that returns the length of a string.
    * FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

* **3.  I do not fear computers. I fear the lack of them**
  * [3-strcmp.c](./3-strcmp.c): C function that compares two strings.
    * Returns the difference in bytes at point of difference.
    * Works identically to the standard library function `strcmp`.

* **4. I can only go one way. I've not got a reverse gear**
  * [4-rev_array.c](./4-rev_array.c): C function that reverses the content of an
  array of integers.

* **5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes**
  * [5-string_toupper.c](./5-string_toupper.c): C function that changes all lowercase
  letters of a string to uppercase.

* **6. Half the lies they tell about me aren't true**
  * [6-cap_string.c](./6-cap_string.c): C function that capitalizes all words of a string.

* **7. Winning is only half of it. Having fun is the other half**
  * [7-leet.c](./7-leet.c): C function that encodes a string into 1337, without
  `switch` or ternary operations and using only one `if` and two loops.
    * Letters `a` and `A` are replaced by `4`.
    * Leters `e` and `E` are replaced by `3`.
    * Letters `o` and `O` are replaced by `0`.
    * Letters `t` and `T` are replaced by `7`.
    * Letters `l` and `L` are replaced by `1`.

* **8. Arrays are not pointers**
  * [8-rot13.c](./8-rot13.c): C function that encodes a string to rot13, without
  `switch` or ternary operations and using only one `if` and two loops.

* **9. strcpy**
  * [100-print_number.c](./100-print_number.c): C function that prints an integer
  without using `long`, arrays, pointers, or hard-coded special values.

* **10. A dream doesn't become reality through magic; it takes sweat, determination and hard work**
  * [101-magic.c](./101-magic.c): C program that prints `a[2] = 98` using pointer magic.
    * Completion of [this source code](https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c).

* **11. It is the addition of strangeness to beauty that constitutes the romantic character in art**
  * [102-infinite_add.c](./102-infinite_add.c): C function that adds two numbers stored
  in strings to a buffer.
    * Assumes that strings are never empty and that numbers will always be positive, or 0.
    * Assumes there are only digits stored in the number strings.
    * If result can be stored in the buffer, returns a pointer to the result.
    * If result cannot be stored in the buffer, returns `0`.

* **12. Noise is a buffer, more effective than cubicles or booth walls**
  * [103-print_buffer.c](./103-print_buffer.c): C function that prints the content of an
  inputted number of bytes from a buffer.
    * Prints 10 bytes per line.
    * Starts with the position of the first byte in hexadecimal (8 chars), starting with `0`.
    * Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space.
    * Each line shows the content of the buffer. Prints the byte if it is printable; if not, prints `.`.
    * Each line ends with a new line `\n`.
    * If the inputted byte size is 0 or less, the function only prints a new line.