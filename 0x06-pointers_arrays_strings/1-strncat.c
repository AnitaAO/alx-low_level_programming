#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to destnation string
 */

char *_strncat(char *dest, char *src, int n)
{
	int string_length, s;
	/* s is a counter for n bytes of src to be concatenated */
	/* string_length = length of destination string */

	string_length = 0;
	while (dest[string_length] != '\0')
	{
		string_length++;
	}
	for (s = 0; s < n && src[s] != '\0'; s++, string_length++)
	{
		dest[string_length] = src[s];
	}
	dest[string_length] = '\0';
	return (dest);
}
