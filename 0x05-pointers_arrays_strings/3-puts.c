#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * Return: Always null
 * @str: Input string parmeter
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
