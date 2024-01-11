#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 *
 * Return: the node at index
 * @head: the head node
 * @index: the location of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		else
		{
			count++;
			temp = temp->next;
		}
	}
	return (NULL);
}
