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

	for (i = 0; *(s + i) != ' '; i++)
	{
		for (j = 0; j < l; j++)
		{
			if (*(s + i) == accept[j])
			{
				count++;
			}
		}
	}
	return (count);
}
