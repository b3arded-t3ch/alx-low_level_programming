#include "main.h"

/**
 * more_numbers - prints digits through 14 ten times
 *
 * Return: Always null
 */
void more_numbers(void)
{
	int i;

	int c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar('1');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
