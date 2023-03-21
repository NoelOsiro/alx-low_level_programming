#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
<<<<<<< HEAD
    int i;
    int t1 = 0, t2 = 1;

    int nextTerm = t1 + t2;
=======
	int c;
	long int n1, n2, fn;
>>>>>>> e3218bb918206d13d93cba536814b14d8ef24db3

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 48; c++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);
}
