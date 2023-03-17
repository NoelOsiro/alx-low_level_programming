/* File:4-print_alphabt.c */
#include <stdio.h>

/**
 * main - Prints the alphabet lowercase without char q and e.
 *
 * Return: 0
 */
int main(void)
{
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
    if (letters[i] != "q" || letters[i] != "e")
	    {
	        putchar(letters[i]);
	    }
	}
	putchar('\n');
	return (0);
}
