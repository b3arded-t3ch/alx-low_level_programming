#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * clear_bit - set bit at index to zero
 *
 * Return: 1 if successful and -1 if not
 * @n: pointer to the binary number
 * @index: position of the bit to clear
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1;

	mask <<= index;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~mask;

	return (1);
}
