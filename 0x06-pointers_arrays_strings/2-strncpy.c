#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to be used
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counts;

	for (counts = 0; counts < n && src[counts] != '\0'; counts++)
		dest[counts] = src[counts];
	for (; counts < n; counts++)
		dest[counts] = '\0';
	return (dest);
}
