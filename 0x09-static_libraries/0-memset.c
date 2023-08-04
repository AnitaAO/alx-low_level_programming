#include "main.h"

/**
 * _memset - Program fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @c: the desired value
 * @n: number of bytes to be changed
 *
 * * Return: change array with new value for n bytes
 */
char *_memset(char *s, char c, unsigned int n)
{
int k = 0;
for (k = 0; n > 0; k++)
{
s[k] = c;
n--;
}
return (s);
}
