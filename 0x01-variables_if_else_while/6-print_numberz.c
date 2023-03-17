/* File: 6-print_numbers.c */
#include <stdio.h>

/**
 * main - Prints single digit numbers only Base 10.
 *
 * Return: 0 
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
