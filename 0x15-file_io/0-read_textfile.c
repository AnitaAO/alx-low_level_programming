#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return: w- number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t cd;
	ssize_t s;
	ssize_t t;

	cd = open(filename, O_RDONLY);
	if (cd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(cd, buf, letters);
	s = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(cd);
	return (s);
}
