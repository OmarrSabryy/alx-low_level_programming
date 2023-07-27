#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - add node at the beggining of a list
 * @head: pointer to address of list
 * @str: ponter to string
 *
 * Return: pointer to  a node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	if (newNode)
	{
		return (newNode);
	}
	return (NULL);
}
