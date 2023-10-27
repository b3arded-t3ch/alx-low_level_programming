#include "main.h"

/**
 * _puts - prints a string to stdout
 * Return: always null
 * @str: input string parameter
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
