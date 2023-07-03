#include "main.h"
/**
 * _memset - fill characters in memory
 * @s: pointer to string
 * @b: char
 * @n: integer
 *
 * Return: pointer to string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
