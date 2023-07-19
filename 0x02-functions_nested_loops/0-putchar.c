#include <stdio.h>
/**
 * main - Entry point
 * Return: returns 0
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
