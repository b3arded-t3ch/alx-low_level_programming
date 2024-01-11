#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dl list
 *
 * Return: Nothing
 * @head: the head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_next, *temp = head;

	while (temp != NULL)
	{
		temp_next = temp->next;
		free(temp);
		temp = temp_next;
	}
}
