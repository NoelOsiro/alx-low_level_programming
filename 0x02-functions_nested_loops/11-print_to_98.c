/*
 * File: 11-print-to98.c.c
 */
#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * @n: The number to begin counting at.
 */

int print_to_98(int n)
{
    int i;

    for (i = n; i <= 98; i++)
    {
        printf("%d, ", i);
    }
    printf("\n");
}
