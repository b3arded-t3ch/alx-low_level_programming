#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all naturak numbers to 98
 *
 * Return: Always an integer
 *
 * @n: parameter for print_to_98
 */
void print_to_98(int n)
{
	if (n > 0)
	{
		for (n = n; n <= 98; n++)
			printf("%d, ", n);
	}
	else if (n < 0)
	{
		for (n = n; n <= 98; n++)
			printf("%d, ", n);
	}
	else if (n > 98)
	{
		for (n = n; n <= 98; n--)
			printf("%d, ", n);
	}
}
