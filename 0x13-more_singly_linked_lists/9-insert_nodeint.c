#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at a position
 *
 * Return: The address of the new node or NULL if it fails
 * @head: the head pointer
 * @idx: the position to insert new node
 * @n: data content of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *NewNode, *temp;
	unsigned int count = 0;

	NewNode = malloc(sizeof(listint_t));

	if (NewNode == NULL)
	{
		return (NULL);
	}
	NewNode->n = n;

	temp = *head;

	if (idx == 0)
	{
		NewNode->next = *head;
		*head = NewNode;
		return (NewNode);
	}
	else
	{
		while (temp != NULL && count < idx - 1)
		{
			temp = temp->next;
			count++;
		}
		if (temp == NULL)
		{
			free(NewNode);
			return (NULL);
		}
		NewNode->next = temp->next;
		temp->next = NewNode;
	}
	return (NewNode);
}
