#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert node
 * @head: pointer to address to node
 * @idx: index
 * @n: integer
 *
 * Return: pointer to node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t = *newnode;
	listint_t = *curr, *prev;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	curr = *head;
	if (curr == NULL)
<<<<<<< HEAD
=======
	{
		newnode->next = NULL;
		curr = newnode;
		return (newnode);
	}
>>>>>>> 33bf6df5e1b8ad39b94d89ed2fe5098edb8764cd
	for (i = 0; i < idx; i++)
	{
		prev = curr;
		curr = curr->next;
	}
	prev->next = newnode;
	newnode->next = curr;
	return (newnode);
}
