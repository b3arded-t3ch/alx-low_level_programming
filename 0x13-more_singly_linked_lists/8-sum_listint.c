#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of data in a list
 *
 * Return: the sum of nodes' data or NULL if no list
 * @head: the head pointer
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp;

	temp = head;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}
