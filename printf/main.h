#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
void _putnbr(int n);
void _putunbr(unsigned int n);
void _puthex(unsigned int n, int uppercase);
void _putbinary(unsigned int n);

#endif /* MAIN_H */
