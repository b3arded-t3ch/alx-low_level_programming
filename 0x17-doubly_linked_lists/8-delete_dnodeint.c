#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node whose index is given
 *
 * Return: 1 on success and -1 if not
 * @head: the head node
 * @index: location of the node to be deleted
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (count == index)
		{
			if (temp == *head)
			{
				*head = (*head)->next;
				if (*head != NULL)
				{
					(*head)->prev = NULL;
				}
			}
			else
			{
				if (temp->next == NULL)
				{
					temp->prev->next = NULL;
				}
				else
				{
					temp->prev->next = temp->next;
					temp->next->prev = temp->prev;
				}
			}
			free(temp);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
