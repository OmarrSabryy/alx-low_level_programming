#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print list numbers
 * @h: poiter to the first node
 *
 * Return: number of elements of node
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
