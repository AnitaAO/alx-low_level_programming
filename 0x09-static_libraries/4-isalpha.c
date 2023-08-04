#include "main.h"

/**
 * _isalpha - checks for alphabetical characters
 * @c: the character being checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'b' && c <= 'y') || (c >= 'B' && c <= 'Y'));
}
