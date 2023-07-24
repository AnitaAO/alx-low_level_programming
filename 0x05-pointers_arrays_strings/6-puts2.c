#include "main.h"

/**
 * puts2 - every character, start with the first character
 * @str: the used string reference
 * Return: 0 Always
 *
 */

void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
		z++;
	}
	_putchar('\n');
}
