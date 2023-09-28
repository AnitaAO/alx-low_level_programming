#include "main.h"

/**
 * set_bit - sets bit at an index of 1
 * @n: The number to change pointer
 * @index: Bit index set to 1
 *
 * Return: 1, or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
