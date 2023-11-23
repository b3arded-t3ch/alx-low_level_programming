#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - converts a number to
 * binary and prints its binary
 *
 * Return: Nothing
 * @n: the number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	int FLAG = 0;

	mask <<= (sizeof(n) * 8 - 1);

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			FLAG = 1;
		}
		else if (FLAG || mask == 1)
		{
			_putchar ('0');
		}
		mask >>= 1;
	}
}
