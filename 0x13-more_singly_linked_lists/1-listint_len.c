#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - length of a list
 *
 * Return: the number of elements in a list
 * @h: the head pointer
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	const listint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
