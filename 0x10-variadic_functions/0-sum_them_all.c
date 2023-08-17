#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the sum of the parameters passed
 * @...: number of parameters to calculate the sum of
 *
 * Return: if n == 0 - 0
 * otherwise - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j, sum = 0;

	va_start(ap, n);
	for (j = 0; j < n; j++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
