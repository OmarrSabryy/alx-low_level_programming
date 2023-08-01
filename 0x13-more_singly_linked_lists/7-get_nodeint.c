#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - node at index
 * @head: pointer to  a node
 * @index: index of node
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *curr;

	if (head == NULL)
	{
		return (NULL);
	}
	count = 0;
	curr = head;
	while (count < index)
	{
		curr = curr->next;
		count++;
	}
	return (curr);
}
