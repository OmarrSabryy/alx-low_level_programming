#include <string.h>
/**
 * string_toupper - change to uppercase
 * @s: pointer to string
 *
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	int l = strlen(s);
	int i;

	for (i = 0; i < l; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			int a = s[i] - 32;
			*(s + i) = a;
		}
	}
	return (s);
}
