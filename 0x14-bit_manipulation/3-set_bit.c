#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - set the value of a bit at index
 *
 * Return: 1 if successful and -1 if not
 * @n: pointer to the binary to set its bit
 * @index: position of bit to set
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1;

	mask <<= index;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= mask;

	return (1);
}
