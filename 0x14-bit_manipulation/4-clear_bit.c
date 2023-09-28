#include "main.h"

/**
 * clear_bit - sets value of a given bit to 0
 * @n: number to change pointer
 * @index: index of the bit to clear
 *
 * Return: 1, or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
