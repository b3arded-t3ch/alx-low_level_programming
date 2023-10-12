#include "main.h"

/**
 * _isupper - checks uppercase letters
 *
 * Return: Always an int
 * @c: parameter
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
