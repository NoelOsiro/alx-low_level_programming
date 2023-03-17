/* File: 101-print_comb4.c */

#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 * Return: 0.
 */
int main(void)
{
	int no1, no2, no3;

	for (no1 = 0; no1 < 8; no1++)
	{
		for (no2 = no1 + 1; no2 < 9; no2++)
		{
			for (no3 = no2 + 1; no3 < 10; no3++)
			{
				putchar((no1 % 10) + '0');
				putchar((no2 % 10) + '0');
				putchar((no3 % 10) + '0');

				if (no1 == 7 && no2 == 8 && no3 == 9)
					continue;
				
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
