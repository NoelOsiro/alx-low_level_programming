#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int nextTerm, afn;
	int t1 = 0, t2 = 1;
    
	nextTerm = afn = 0;
	while (nextTerm <= 4000000)
	{
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		if ((t1 % 2) == 0)
		{
			afn += t1;
		}
	}
	printf("%ld\n", afn);
	return (0);
}
