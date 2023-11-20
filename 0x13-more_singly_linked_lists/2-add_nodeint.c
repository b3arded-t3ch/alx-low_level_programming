#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add a node at front
 *
 * Return: the new node
 * @head: head pointer
 * @n: data content of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
	{
		return (NULL);
	}


	NewNode->n = n;
	NewNode->next = *head;
	*head = NewNode;

	return (NewNode);
}
