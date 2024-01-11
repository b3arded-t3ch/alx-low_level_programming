#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - calculates the number of elements in a dl list
 *
 * Return: return number of element
 * @h: head node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
