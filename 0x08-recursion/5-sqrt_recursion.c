#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate square root of
 *
 * Return: the resulting square root, or -1 if theres no natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt(n, 1));
}

/**
 * actual_sqrt - Recursely to finds the natural square root of a number.
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root, or -1 if there is no natural square root.
 */

int actual_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt(n, i + 1));
}
