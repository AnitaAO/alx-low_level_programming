#include <stdlib.h>
#include "main.h"

/**
 * count_word - Function helper, to count numbers
 * @s: string to evaluate
 *
 * Return: number of words count
 */

int count_word(char *s)
{
	int flag, a, b;

	flag = 0;
		b = 0;
		for (a = 0; s[a] != '\0'; a++)
		{
			if (s[a] == ' ')
				flag = 0;
			else
				if (flag == 0)
				{
					flag = 1;
					b++;
				}
		}
			return (b);
}

/**
 * **strtow -function that splits a string into two words
 * @str: string to split
 *
 * Return: pointer to array of strings (success)
 * or NULL (error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;

	int j, k = 0, length = 0, words, l = 0, start, end;

	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (j = 0; j <= length; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (l)
			{
				end = j;
				tmp = (char *) malloc(sizeof(char) * (l + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - l;
				k++;
				l = 0;
			}
		}
		else
			if (l++ == 0)
				start = j;
	}
matrix[k] = NULL;
return (matrix);
}
