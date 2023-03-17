/* File: 7-print_tebahpla.c */
#include <stdio.h>

/**
 * main - Prints alphabet in reverse.
 *
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
