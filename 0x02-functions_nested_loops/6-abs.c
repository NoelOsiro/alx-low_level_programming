/*
 * File: 6-abs.c
 */

#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to be checked.
 * Return: The absolute value of the integer.
 *         The standard library provides a similar function: abs.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
