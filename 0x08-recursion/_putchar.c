#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to be printed
 * Return: 1 on success
 * On error -1 is returned, and errno is set appropriately 
 */

int _putchar(char c)
{
	return(write((1, &c, 1)));
}
