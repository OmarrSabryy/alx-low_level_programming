#include <string.h>
#include "main.h"
/**
 * _strchr - locate character
 * @s: pointer to string
 * @c: char
 *
 * Return: address of character
 */
char *_strchr(char *s, char c)
{
	int i;
	int l = strlen(s);

	for (i = 0; i < l; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
