/* File:4-print_alphabt.c */
#include <stdio.h>
#include <string.h>

/**
 * main - Prints the alphabet lowercase without char q and e.
 *
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'e' && letters != 'q' )
		{
			printf("%c", letters);
		}
    	}
	putchar('\n');
	return (0);
}
