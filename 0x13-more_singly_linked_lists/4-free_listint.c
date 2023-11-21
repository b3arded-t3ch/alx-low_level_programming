#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 *
 * Return: Nothing
 * @head: the head pointer
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
}
