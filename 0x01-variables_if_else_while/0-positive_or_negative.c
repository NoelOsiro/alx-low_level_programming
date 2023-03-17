/* File:0-positive_or_negative.c */
#include <stdlib.h>
#include <time.h>
/* main-print whether the number
* stored in the variable positive or negative.
*Return : 0
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*check n is greater than zero*/
	if (n>0)
	{
	    printf("%d is positive",n);
	}
	/*check n is less than zero*/
	else if (n<0)
	{
	    printf("%d is negative",n);
	}
	/*n is equal to zero*/
	else if (n==0)
	{
	    printf("%d is zero",n);
	}
	return (0);
}
