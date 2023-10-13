#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * Return: Always null
 *
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	char c = '#';

	char s = ' ';

	int i;

	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= (size - i); j++)
		{
			_putchar(s);
		}
		for (j = 1; j <= i; j++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
