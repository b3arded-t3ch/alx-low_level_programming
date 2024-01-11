#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - calculates the sum of dll data
 *
 * Return: the sum of all the data
 * @head: the head node
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
