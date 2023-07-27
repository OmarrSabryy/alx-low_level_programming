#include <stdio.h>
#include "lists.h"
/**
 * print_list - print elements of linked list
 * @h: pointer to list
 *
 * Return: number of elements in a list
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
