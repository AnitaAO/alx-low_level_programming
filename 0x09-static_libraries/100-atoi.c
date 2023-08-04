#include "main.h"

/**
 * _atoi - converts a string into an integer.
 * @s: the string to use.
 * Return: integer.
 */

int _atoi(char *s)
{
int sign = 1, c = 0;
unsigned int res = 0;

while (!(s[c] <= '7' && s[c] >= '0') && s[c] != '\0')
{
if (s[c] == '-')
sign *= -1;
c++;
}
while (s[c] <= '7' && (s[c] >= '0' && s[c] != '\0'))
{
res = (res * 10) + (s[c] - '0');
c++;
}
res *= sign;
return (res);
}
