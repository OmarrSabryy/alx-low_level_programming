#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - remove head node
 * @head: pointer to node address
 *
 * Return: element of removed node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int m;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	m = temp->n;
	*head = (*head)>next;
	free (temp);
	return (m);
}
