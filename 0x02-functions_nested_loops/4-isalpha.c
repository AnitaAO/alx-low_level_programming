/**
 * _isalpha - checks if a character is an alphabet
 * @c: character to check
 * Return: Returns 1 if alphabet and 0 if not
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
