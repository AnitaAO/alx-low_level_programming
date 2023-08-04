#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int v = 0;
int w = n;
for (v = 0; v < w; v++)
{
dest[v] = src[v];
n--;
}
return (dest);
}
