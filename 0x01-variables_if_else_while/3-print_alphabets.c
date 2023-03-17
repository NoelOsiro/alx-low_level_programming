/* File:3-print_alphabets.c */
#include <stdio.h>

/**
 * main - Prints the alphabet lowercase and uppercase follwed by new line.
 *
 * Return: 0
 */
int main(void)
{
	char letters[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
