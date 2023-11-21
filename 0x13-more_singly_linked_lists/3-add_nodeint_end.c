#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - appends new node
 *
 * Return: the address of the new node
 * @head: head pointer
 * @n: the data value of a node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *NewNode = malloc(sizeof(listint_t));

	if (NewNode == NULL)
	{
		return (NULL);
	}

	NewNode->n = n;
	NewNode->next = NULL;

	if (*head == NULL)
	{
		*head = NewNode;
		return (*head);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	};
	temp->next = NewNode;
	return (NewNode);
}

