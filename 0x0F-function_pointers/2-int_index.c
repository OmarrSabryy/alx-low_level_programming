#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - check array elements
 * @array: array
 * @size: size of the array
 * @cmp: pointer to a function
 *
 * Return: index of element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
