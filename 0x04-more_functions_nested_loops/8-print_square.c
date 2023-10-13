#include "main.h"

/**
 * print_square - prints squqres
 *
 * Return: Always null
 * @size: The parameter
 */
void print_square(int size)
{
	char c = '#';

	int i, j;

	if (size < 0 || size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(c);
			}
			_putchar('\n');
		}
	}
}
