/* File:0-1-last_digit.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print whether the last digit of n is gt than 5 , lt 6 or equal to 0.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int lt_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lt_digit = n % 10;
	/*
	 * To get last digit we find modulus by 10
	 */
	if (lt_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lt_digit);
	}
	else if (lt_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lt_digit);
	}
	else if (lt_digit < 7)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lt_digit);
	}
	return (0);
}
