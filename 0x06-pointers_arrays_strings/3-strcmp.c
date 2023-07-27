#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: < 0 if string is < the other, > 0 if string is > the other
 */

int _strcmp(char *s1, char *s2)
{
	int counter, compare_values;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	compare_values = s1[counter] - s2[counter];
	return (compare_values);
}
