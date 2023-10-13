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

	int i;

	for (i = 0; i < size; i++)
	{
		if ((size < 0) || (size == 0))
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
