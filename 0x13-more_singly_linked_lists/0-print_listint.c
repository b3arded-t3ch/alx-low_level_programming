#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 *
 * Return: the number of nodes in the list
 * @h: the head of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	const listint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}
	return (counter);
}
