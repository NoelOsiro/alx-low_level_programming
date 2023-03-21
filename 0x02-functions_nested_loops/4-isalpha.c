/*
 * File: 4-isalpha.c
 */

#include<stdio.h> 
/**
 * _isalpha - Checks if a character is alphabetic.
 * 
 * Return: 1 if character is lowercase, 0 otherwise.
 *          The standard library provides a similar function: isalpha
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return(1);
    }
	else
    {
        return (0);
    }
}
