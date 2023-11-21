#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes a head node
 *
 * Return: the head node's data
 * @head: the head pointer
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	if (temp == NULL)
	{
		return (0);
	}
	*head = temp->next;
	free(temp);
	return ((*head)->n);
}
