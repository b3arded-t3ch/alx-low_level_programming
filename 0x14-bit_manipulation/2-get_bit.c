#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - get bit at an index
 *
 * Return: the bit at the index
 * @n: the binary from which to get bit
 * @index: The position of the bit to get
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	unsigned int bit;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	mask = 1;

	mask <<= index;

	bit = (n & mask) ? 1 : 0;

	return (bit);
}
