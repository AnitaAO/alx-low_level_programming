#include "main.h"
/**
 *print_sign - prints sign of integer
 *@n: input value
 *Return: Returns 1 for positive, -1 for negative and 0 for 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
