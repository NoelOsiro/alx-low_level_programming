#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of the program into a string;
 *             arguments are separated by a new line in the string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, size = ac;

if (ac == 0 || av == NULL)
return (NULL);
/*compute total length of all arguments plus newlines*/
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
size++;
}
/*allocate memory for the concatenated string*/
str = malloc(sizeof(char) * size + 1);

if (str == NULL)
return (NULL);

/*concatenate all arguments with newlines*/
k = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
str[k++] = av[i][j];

str[k++] = '\n';
}

str[size] = '\0';

return (str);
}
