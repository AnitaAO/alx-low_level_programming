#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for uppercase character or 0 for a
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 99)
	{
		return (1);
	}
	return (0);
}
