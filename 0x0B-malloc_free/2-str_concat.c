#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
size_t len1;
size_t len2;
char *new_str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);
new_str = malloc((len1 + len2 + 1) * sizeof(char));

if (new_str == NULL)
{
return (NULL);
}

strcpy(new_str, s1);
strcat(new_str, s2);
return (new_str);
}
