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
	int count = 0;

	while (h->next != NULL)
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
	count++;
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s", h->len, h->str);
	}
	return (count);
}
