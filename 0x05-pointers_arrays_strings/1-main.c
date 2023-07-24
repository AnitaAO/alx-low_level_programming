#include "main.h"
#include <stdio.h>

/**
 * main - checks the code
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	int b;

	a = 90;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
