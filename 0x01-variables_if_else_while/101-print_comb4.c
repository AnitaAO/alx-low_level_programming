#include <stdio.h>
/**
 * main - Prints all different combinations of 3 digits
 * Return: 0
 */
int main(void)
{
int n, m, i;
for (n = 48; n < 58; n++)
{
for (m = 49; m < 58; m++)
{
for (i = 50; i < 58; i++)
{
if (i > m && m > n)
{
putchar(n);
putchar(m);
putchar(i);
if (n != 55 || m != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
