#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of number of characters
 * @c: the caharcter to be printe int the array
 * @size: the size of the memory to print
 *
 * Return: character.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *y;

	if (size == 0)
	{
		return (NULL);
	}
	y = malloc(size * sizeof(c));

	if (!y)
	{
		return (NULL);
	}
	while (i < size)
	{
		y[i] = c;
		i++;
	}
	return (y);
}
