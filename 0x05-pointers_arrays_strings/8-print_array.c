#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an integer array
 * followed by a new line
 * @a: this is the input array
 * @n: this is the length of the array
 *
 */

void print_array(int *a, int n)
{
	int index_of_array;

	for (index_of_array = 0; index_of_array < n; index_of_array++)
	{
		printf("%d", a[index_of_array]);
		if (index_of_array != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}

