/**
 * _islower - checks if a character is a lowercase
 * @c: input
 * Return: Returns 1 if lowercase and 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
