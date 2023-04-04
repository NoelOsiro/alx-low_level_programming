#include "main.h"
/**
* char *_memcpy - copies n bytes from memory area src to memory area dest
*  @dest: destination
*   @src: source
*    @n: number of bytes
*     Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
if (unsigned int n > 0)
{

for (index = 0; index < unsigned int n; index)
dest[index] = src[index];
}
return (dest);

}
