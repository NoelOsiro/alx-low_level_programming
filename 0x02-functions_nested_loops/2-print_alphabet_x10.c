/*
 * File: 1-alphabet.c
 */
#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int count  = 0;
	int i;

	while (count++ <= 9)
	{
		 int i;
    
    	for (i = 97; i <= 122; i++)
    	{
        	printf("%c", i);
    	}
		_putchar('\n');
	}
}
