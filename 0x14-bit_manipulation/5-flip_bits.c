#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - flips bits
 *
 * Return: the number of flips
 * @n: the first number
 * @m: the second number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, mask = 1;

	unsigned int count = 0;

	flip = n ^ m;

	while (mask != 0)
	{
		if (flip & mask)
		{
			count++;
		}
		mask <<= 1;
	}

	return (count);
}
