#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int c, boolean, boolean;
	long fn, ft2, t11, t22;

	int t1 = 0, t2 = 1;
	boolean =  boolean = 1;
	printf("%ld, %ld", t1, t2);
	for (c = 0; c < 96; c++)
	{
		if (boolean)
		{
			fn = t1 + t2;
			printf(", %ld", fn);
			t1 = t2;
			t2 = fn;
		}
		else
		{
			if (boolean)
			{
				t11 = t1 % 1000000000;
				t22 = t2 % 1000000000;
				t1 = t1 / 1000000000;
				t2 = t2 / 1000000000;
				boolean = 0;
			}
			ft2 = (t11 + t22);
			fn = t1 + t2 + (ft2 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", ft2 % 1000000000);
			t1 = t2;
			t11 = t22;
			t2 = fn;
			t22 = (ft2 % 1000000000);
		}
		if (((t1 + t2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}