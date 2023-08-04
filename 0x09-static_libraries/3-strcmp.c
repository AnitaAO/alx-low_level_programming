#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
int b;

b = 0;
while (s1[b] != '\0' && s2[b] != '\0')
{
if (s1[b] != s2[b])
{
return (s1[b] - s2[b]);
}
b++;
}
return (0);
}
