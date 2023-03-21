/*
 * File: 3-islower.c
 */

#include<stdio.h> 
/**
 * _islower - Checks if a character is lowercase.
 * *
 * Return: 1 if character is lowercase, 0 otherwise.
 *         The standard library provides a similar function: islower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
