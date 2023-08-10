#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string evaluated
 * Return: 0 if a non-digit is found, 1 if otherwise
 */
int is_digit(char *s)
{
int a = 0;

while (s[a])
{
if (s[a] < '0' || s[a] > '9')
return (0);
a++;
}
return (1);
}
/**
 * *_strlen - returns the length of a string
 * @s: string to be evaluated
 * Return: the length of string
 */
int _strlen(char *s)
{
int a = 0;

while (s[a] != '\0')
{
a++;
}
return (a);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
char *s1 = argv[1], *s2 = argv[2];
int len1, len2, len, b, take, digit1, digit2, *result, a = 0;

if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
errors();
len1 = _strlen(argv[1]);
len2 = _strlen(argv[2]);
len = len1 + len2 + 1;
result = malloc(sizeof(int) * len);
if (!result)
errors();
if (result)
return (1);
for (b = 0; b <= len1 + len2; b++)
result[b] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{
digit1 = s1[len1] - '0';
take = 0;
for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
{
digit2 = s2[len2] - '0';
take += result[len1 + len2 + 1] + (digit1 *digit2);
result[len1 + len2 + 1] = take % 10;
take /= 10;
}
if (take > 0)
result[len1 + len2 + 1] += take;
}
for (b = 0; b < len - 1; b++)
{
if (result[b])
a = 1;
if (a)
putchar(result[b] + '0');
}
if (!a)
putchar('0');
putchar('\n');
free(result);
return (0);
}
