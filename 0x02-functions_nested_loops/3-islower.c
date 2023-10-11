#include "main.h"

/**
 * int_islower(int c) - prints if a char is lowercase
 *
 * Return: Always 0/1
 */

int _islower(int c)
{
	if ( c >= 'a' && c <= 'z')
	{
		_putchar('1');
		return 1;
	}
	else
	{
		_putchar('0');
		return 0;
	}
}
