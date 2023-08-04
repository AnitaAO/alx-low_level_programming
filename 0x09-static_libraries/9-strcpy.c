#include "main.h"
/**
 * char *_strcpy - program copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string value
 */

char *_strcpy(char *dest, char *src)
{
int m = 0;
int n = 0;

while (*(src + m) != '\0')
{
m++;
}
for (m = 0; n < m ; n++)
{
dest[n] = src[n];
}
dest[m] = '\0';
return (dest);
}
