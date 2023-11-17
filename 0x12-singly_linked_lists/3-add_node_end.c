#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - appends a node to list_t list
 *
 * Return: the address of the new element,
 * or NULL if it failed
 * @head: head reference to the first node
 * @str: data content of the last node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *last_node;
	size_t n;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);

	for (n = 0; str[n]; n++)
	{
		;
	}
	newnode->len = n;

	last_node = *head;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = newnode;
	}
	return (*head);
}
