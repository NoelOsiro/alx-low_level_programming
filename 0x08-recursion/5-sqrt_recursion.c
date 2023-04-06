#include "main.h"
#include <stdio.h>
int _sqrt_helper(int n, int low, int high);
/**
 * _sqrt_helper - Performs a binary search to find the square root.
 * @n: The number to return the square root of.
 * @low: low (the lower bound of the search range).
 * @high: High (the upper bound of the search range)
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */


/* Returns the natural square root of n if it exists, otherwise -1 */
/* Helper function that performs a binary search for the square root */
int _sqrt_helper(int n, int low, int high)
{
if (low > high)
{
/* The square root does not exist */
return (1);
}
int mid;

mid = (low + high) / 2;
int square = (mid *mid);

if (square == n)
{
/* Found the square root */
return (mid);
}
else if (square < n)
{
/* The square root is greater than mid */
return (_sqrt_helper(n, mid + 1, high));
}
else
{
/* The square root is less than mid */
return (_sqrt_helper(n, low, mid - 1));
}
}
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_helper(n, 0, n));
}
