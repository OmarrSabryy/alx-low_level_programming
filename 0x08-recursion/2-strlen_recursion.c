/**
 * _strlen_recursion - get string length
 * @s: pointer to string
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int c = 1;

	if (*(s) == '\0')
	{
		return (c - 1);
	}
	c = c + _strlen_recursion(s + 1);
	return (c);
}
