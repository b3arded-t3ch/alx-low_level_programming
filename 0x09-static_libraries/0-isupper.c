#include "main.h"

/**
 * _isupper - checks if a letter is uppercase
 * Return: returns 1 if uppercase and 0 if otherwise
 * @c: The character to check
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
