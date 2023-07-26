#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: source string pointer
 * @dest: destination string pointer
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int string_length, s;

	string_length = 0;
	while (dest[string_length] != '\0')
	{
		string_length++;
	}
	for (s = 0; src[s] != '\0'; s++, string_length++)
	{
		dest[string_length] = src[s];
	}
	dest[string_length] = '\0';
	return (dest);
}
