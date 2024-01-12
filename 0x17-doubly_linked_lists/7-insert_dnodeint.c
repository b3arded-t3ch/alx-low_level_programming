#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index
 *
 * Return: address of the new node or NULL if it failed
 * @h: the head node
 * @idx: location to insert new node
 * @n: new nodes data
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int count = 0;
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;

	while (temp != NULL)
	{
		if (count == idx)
		{
			newnode->next = temp->next;
			newnode->prev = temp;
			temp->next = newnode;
			if (idx == 0)
			{
				*h = newnode;
			}
			return (newnode);
		}
		else
		{
			count++;
			temp = temp->next;
		}
	}
	return (NULL);
}
