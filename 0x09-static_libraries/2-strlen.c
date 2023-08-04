#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
int longlen = 0;
while (*s != '\0')
{
longlen++;
s++;
}
return (longlen);
}
