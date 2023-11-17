#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a node at the front of head node
 *
 * Return: the address of the new element
 * @head: the current head of the list
 * @str: the data to be copied to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);

	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
