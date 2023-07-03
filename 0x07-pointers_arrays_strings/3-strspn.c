#include <string.h>
#include "main.h"
/**
 * _strspn - scan string
 * @s: pointer to string
 * @accept: pointer to string
 *
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count;
	int l = strlen(accept);
	char current;

	for (i = 0; i < l; i++)
	{
		if (!(accept[i] == current))
		{
			for (j = 0; *(s + j) != ' '; j++)
			{
				if (accept[i] == *(s + j))
				{
					count++;
				}
			}
			current = accept[i];
		}
	}
	return (count);
}
