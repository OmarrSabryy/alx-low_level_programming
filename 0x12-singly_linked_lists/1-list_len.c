#include <stdio.h>
#include "lists.h"
/**
 * list_len - length of a list
 * @h: pointer to a list
 *
 * Return: length of a list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
