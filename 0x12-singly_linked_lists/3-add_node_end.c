#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add node at the end of a list
 * @head: pointer to the address of a list
 * @str: pointer to a string
 *
 * Return: pointer to the added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	list_t *next = *head;

	newNode = malloc(sizeof(list_t));
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;
	if (!newNode)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (prev->next != NULL)
	{
		prev = prev->next;
	}
	prev->next = newNode;
	return (newNode);
}
