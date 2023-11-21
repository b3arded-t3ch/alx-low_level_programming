#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 *
 * Return: 1 or -1 if not succeed
 * @head: head pointer
 * @index: the index of node to delete
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (1);
	}
	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && count < index)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	prev->next = temp->next;
	free(temp);
	return (1);
}
