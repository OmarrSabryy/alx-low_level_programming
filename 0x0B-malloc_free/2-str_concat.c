#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concates two strings
 * @s1: pointer
 * @s2: pointer
 *
 * Return: character.
 */
char *str_concat(char *s1, char *s2)
{
	int x;
	unsigned int i = 0;
	unsigned int j = 0;
	char *y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	x = strlen(s1) + strlen(s2) + 1;
	y = malloc(x * sizeof(char));

	if (!y)
	{
		return (NULL);
	}
			while (i < strlen(s1))
			{
			y[i] = s1[i];
			i++;
			}
			while (j < (strlen(s2) + 1))
			{
			y[i] = s2[j];
			i++;
			j++;
			}
			return (y);
}
