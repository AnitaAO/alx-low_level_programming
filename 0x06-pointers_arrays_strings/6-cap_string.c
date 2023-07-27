#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: pointer to string
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int string_count;

	/* scan through string */
	string_count = 0;
	while (s[string_count] != '\0')
	{/* if next character after count is a char, capitalize it */
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[string_count] == ' ' || s[string_count] == '\t'
				|| s[string_count] == '\n' || s[string_count] == ','
				|| s[string_count] == ';' || s[string_count] == '.'
				|| s[string_count] == '.' || s[string_count] == '!'
				|| s[string_count] == '?' || s[string_count] == '"'
				|| s[string_count] == '(' || s[string_count] == ')'
				|| s[string_count] == '{' || s[string_count] == '}')
		{
			if (s[string_count + 1] >= 97 && s[string_count + 1] <= 122)
			{
				s[string_count + 1] = s[string_count + 1] - 32;
			}
		}
		string_count++;
	}
	return (s);
}
