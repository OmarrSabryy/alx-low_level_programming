#include <string.h>
#include "main.h"
/**
 * _strpbrk - first match
 * @s: pointer to string
 * @accept: pointer to string
 *
 * Return: pointer to string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int l = strlen(accept);
	int m = strlen(s);

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < l; j++)
		{
			if (accept[j] == *(s + i))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
