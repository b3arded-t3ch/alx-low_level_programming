#include "main.h"

/**
 * print_numbers - This function prints numbers from 0 to 9
 *
 * Return: Always 0
 * @void: Takes no input
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
