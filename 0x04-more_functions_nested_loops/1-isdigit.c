#include "main.h"

/**
 * _isdigit - checks for number between 0 and 9
 *
 * Return: Always an integer
 *
 * @c: This is the parameter
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
