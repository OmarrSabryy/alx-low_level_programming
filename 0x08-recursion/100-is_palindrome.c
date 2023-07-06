#include <string.h>
/**
 * check_palindrome - check palindrome
 * @s: pointer to string
 * @l: integer
 *
 * Return: integer
 */
int check_palindrome(char *s, int l)
{
	if (l <= 0)
	{
		return (1);
	}
	if (*s == *(s + (l - 1)))
	{
		return (check_palindrome(s + 1, l - 2));
	}
	return (0);
}
/**
 * is_palindrome - check palindrome
 * @s: pointer to string
 *
 * Return: integer
 */
int is_palindrome(char *s)
{
	int l = strlen(s);

	if (l == 0)
	{
		return (1);
	}
	return (check_palindrome(s, l));
}
