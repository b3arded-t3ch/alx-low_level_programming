#include "main.h"

/**
 * print_line - Prints a straight line
 *
 * Return: Always null
 * @n: length of line
 */
void print_line(int n)
{
	char c = '_';

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
