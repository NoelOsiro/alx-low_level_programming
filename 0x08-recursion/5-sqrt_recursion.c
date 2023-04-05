#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
#include <stdio.h>

int _sqrt_helper(int n, int low, int high) {
    if (low > high)
    {
        return -1;  /* error: n does not have a natural square root */
    }
    int mid = (low + high) / 2;
    int mid_sq = mid * mid;
    if (mid_sq == n)
    {
        return mid;  
    } else if (mid_sq < n)
    {
        return _sqrt_helper(n, mid + 1, high);
    } else
    {
        return _sqrt_helper(n, low, mid - 1);
    }
}

int _sqrt_recursion(int n) {
    if (n < 0)
    {
        return -1;  
    }
    else if (n == 0 || n == 1)
    {
        return n;   
    }
    else {
        return _sqrt_helper(n, 1, n / 2);
    }
}
