/*
 * File: 11-print-to98.c.c
 */
#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers
 * from n to 98.
 *
 * @n: input number.
 *
 * Return: no return.
 */
void print_to_98(int n)
{
<<<<<<< HEAD
    int i;

    for (i = n; i <= 98; i++)
    {
        if (i == 98)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d, ", i);
        }
    }
    printf("\n");
=======
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
>>>>>>> 7e79dbde7056a8d869629f216a9ee8f431b524e1
}
