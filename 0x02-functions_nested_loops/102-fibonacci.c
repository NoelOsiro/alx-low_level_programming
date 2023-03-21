/*
 * File: 102-fibonacci.c
 */

#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *
 * Return: Always 0.
 */

int main(void)
{
    int i;
    int t1 = 0, t2 = 1;

    int nextTerm = t1 + t2;

    printf("%d, %d, ", t1, t2);
    for (i = 3; i <= 50; ++i) {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
  return 0;
}
