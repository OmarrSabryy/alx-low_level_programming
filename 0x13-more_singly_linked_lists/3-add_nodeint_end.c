#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add node
 * @head: pointer to address
 * @n: integer
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	newNode = *head;
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	*head = newNode;
	return (newNode);
}
