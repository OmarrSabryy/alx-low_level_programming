#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - prints a given string
 * @str: pointer to string
 *
 * Return: character.
 */
char *_strdup(char *str)
{
	int x;
	int i = 0;
	char *y;

	if (!str)
	{
		return (NULL);
	}
	x = strlen(str) + 1;
	y = malloc(x * sizeof(char));

	if (!y)
	{
		return (NULL);
	}
	while (i < x)
	{
		y[i] = str[i];
		i++;
	}
	return (y);
}
