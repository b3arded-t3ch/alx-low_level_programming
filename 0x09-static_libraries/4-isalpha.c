#include "main.h"

/**
 * _isalpha - tests if a character is alpha
 * Return: an int
 * @c: parameter to test
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
