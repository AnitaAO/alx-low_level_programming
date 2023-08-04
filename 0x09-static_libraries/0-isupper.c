#include "main.h"

/**
 * _isupper - checks if uppercase letters is present
 * @c: character to be checked
 *
 * Return: if uppercase return 1, else return o
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
