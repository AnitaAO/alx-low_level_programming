#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that prints each array element on a new!
 * @array: array
 * @size: how many element to print
 * @action: pointer to print in a regular or hex
 * Return: void
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
