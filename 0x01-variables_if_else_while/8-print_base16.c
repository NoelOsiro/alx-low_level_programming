/* File: 8-print_base16.c */

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
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
	}
	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
