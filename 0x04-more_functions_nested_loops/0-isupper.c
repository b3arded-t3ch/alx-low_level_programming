#include "main.h"

/**
 * _isupper - checks if a letter is uppercase
 *
 * Return: Always an int
 * 
 * @c: The parameter
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
