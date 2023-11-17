#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - computes the number of nodes in a list
 *
 * Return: return the number of nodes in a list
 * @h: the head node pointer
 */
size_t list_len(const list_t *h)
{
	size_t count_node = 0;

	while (h)
	{
		count_node++;
		h = h->next;
	}
	return (count_node);
}
