#include "main.h"

/**
 * print_rev - print string in reverse order
 *
 * Return: Always void
 * @s: parameter
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (length--; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
