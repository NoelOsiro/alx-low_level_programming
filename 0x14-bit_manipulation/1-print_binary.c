#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (mask)
	{
		if (n & mask)
		{
			flag = 1;
			putchar('1');
		}
		else if (flag)
			putchar('0');

		mask = mask >> 1;
	}

	if (!flag)
		putchar('0');
}
