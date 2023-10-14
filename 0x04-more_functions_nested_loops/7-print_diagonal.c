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

	int i, j;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar(c);
			_putchar('\n');
		}
	}
}
