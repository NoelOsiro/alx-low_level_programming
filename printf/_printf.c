#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdlib.h>

// Writes a single character to stdout
static void write_char(char c, int *num_chars_printed) {
    write(1, &c, 1);
    (*num_chars_printed)++;
}

// Writes a string to stdout
static void write_string(char *s, int *num_chars_printed) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    write(1, s, len);
    (*num_chars_printed) += len;
}

// Writes an integer to stdout
static void write_integer(int num, int *num_chars_printed) {
    char buf[32];
    int len = snprintf(buf, sizeof(buf), "%d", num);
    write(1, buf, len);
    (*num_chars_printed) += len;
}

// Writes an unsigned integer to stdout in the specified base
static void write_unsigned_int(unsigned int num, int base, bool is_uppercase_hex, int *num_chars_printed) {
    char buf[32];
    if (is_uppercase_hex) {
        // Convert to uppercase hex letters
        for (int i = 0; i < sizeof(buf); i++) {
            buf[i] = '\0';
        }
        int i = sizeof(buf) - 1;
        do {
            int digit = num % base;
            buf[i--] = (digit < 10) ? ('0' + digit) : ('A' + digit - 10);
            num /= base;
        } while (num != 0);
        i++; // Adjust i to first non-zero index
        for (; i < sizeof(buf); i++) {
            if (buf[i] >= 'a' && buf[i] <= 'z') {
                buf[i] = buf[i] - 'a' + 'A';
            }
        }
    } else {
        // Lowercase hex letters or octal or decimal
        int len = snprintf(buf, sizeof(buf), (base == 8) ? "%o" : (base == 16) ? "%x" : "%u", num);
    }
    int len = 0;
    while (buf[len] != '\0') {
        len++;
    }
    write(1, buf, len);
    (*num_chars_printed) += len;
}

// Main printf function
int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int num_chars_printed = 0;

    while (*format != '\0') {
        if (*format == '%') {
            // Handle conversion specifier
            format++;
            bool is_unsigned = false;
            switch (*format) {
                case 'c': {
                    char c = va_arg(args, int);
                    write_char(c, &num_chars_printed);
                    break;
                }
                case 's': {
                    char *s = va_arg(args, char*);
                    write_string(s, &num_chars_printed);
                    break;
                }
                case 'd':
                case 'i': {
                    int num = va_arg(args, int);
                    write_integer(num, &num_chars_printed);
                    break;
                }
                case 'u': {
                    unsigned int num = va_arg(args, unsigned int);
                    write_unsigned_int(num, 10, false, &num_chars_printed);
                    break;
                }
                case 'o': {
                            unsigned int num = va_arg(args, unsigned int);
                            write_unsigned_int(num, 8, false, &num_chars_printed);
                            break;
                            }
                case 'X': {
                            is_unsigned = true;
                                // fall through to handle as uppercase hexadecimal
                            }
                case 'x': {
                            unsigned int num = is_unsigned ? va_arg(args, unsigned int) : va_arg(args, int);
                            bool is_uppercase_hex = (*format == 'X');
                            write_unsigned_int(num, 16, is_uppercase_hex, &num_chars_printed);
                            break;
                            }
            }                   
        }
        else {
            // Handle regular character
            write(1, format, 1); // write character to stdout
            num_chars_printed++;
        }

        format++;
    }

    va_end(args);

    return num_chars_printed;
}
