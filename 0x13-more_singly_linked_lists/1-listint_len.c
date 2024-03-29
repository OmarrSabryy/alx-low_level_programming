#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - count number of elements
 * @h: pointer to a node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
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
