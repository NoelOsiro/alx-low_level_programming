#include "main.h"

/**
 *  _memset - fill n bytes of memory with a constant value
 *  @s: pointer to memory area
 *  @b: constant value
 *  @n: number of bytes to fill
 *  Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	if (n > 0)
	{
		for (unsigned int index = 0; index < n; index++)
		{
			s[index] = b;
		}
	}
	return (s);
}


