#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - apply function to array elements
 * @array: array
 * @size: size of the array
 * @action: pointer to a function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
