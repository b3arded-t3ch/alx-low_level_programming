#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a list and set head to NULL
 *
 * Return: nothing
 * @head: head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	while (temp != NULL)
	{
		*head = temp->next;
		free(temp);
		temp = *head;
	}
	*head = NULL;
}
