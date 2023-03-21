/*
 * File: 1-alphabet.c
 */

#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int count,j = 0;
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";

	while (count++ <= 9)
	{
		for (j = 0; j <= 26; j++)
			_putchar(letters[j]);
		_putchar('\n');
	}
}
