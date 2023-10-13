#include "main.h"

/**
 * print_diagonal - Prints diagonals
 *
 * Return: Always null
 * @n: length of line
 */
void print_diagonal(int n)
{
	char c = '\\';

	int i;

	for (i = 0; i <= n; i++)
	{
		if ((n == 0) || (n < 0))
		{
			_putchar('\n');
		}
		else
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
