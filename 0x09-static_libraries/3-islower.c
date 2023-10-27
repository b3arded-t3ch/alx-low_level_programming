#include "main.h"

/**
 * _islower - tests if a letter is lower case
 * Return: an integer
 * @c: parameter to test
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
