#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
int len = strlen(s);
for (int i = 0; i < len / 2; i++)
{
if (s[i] != s[len - i - 1])
{
return (0);
}
}
return (1);
}
