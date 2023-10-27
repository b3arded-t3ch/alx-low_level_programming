#include "main.h"

/**
 * _isdigit - checks for number 0 and 9
 * Return: Always an integer
 * @c: The value to check
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
