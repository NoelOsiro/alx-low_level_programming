/* File: 9-print_comb.c */

#include <stdio.h>

/**
 * main - Prints all the numbers 0-9.
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char letters;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
    putchar(',');
    putchar(' ');
	}
	putchar('\n');
	return (0);
}
