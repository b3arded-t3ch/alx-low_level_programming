#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - prints the sum of two diagonals
 * Return: void
 * @a: parameter
 * @size: parameter
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;

	int sum2 = 0;

	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	if (sum1 < 10)
	{
		_putchar(sum1 + '0');
	}
	else
	{
		print_number(sum1);
	}
	_putchar(',');
	if (sum2 < 10)
	{
		_putchar(sum2 + '0');
	}
	else
	{
		print_number(sum2);
	}
	_putchar('\n');
}
