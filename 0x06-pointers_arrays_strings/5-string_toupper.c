#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @x: pointer to string
 * Return: pointer to uppercase string
 */

char *string_toupper(char *x)
{
	int string_length;

	string_length = 0;
	while (x[string_length] != '\0')
	{
		if (x[string_length] >= 97 && x[string_length] <= 122)
		{
			x[string_length] = x[string_length] - 32;
		}
		string_length++;
	}
	return (x);
}
