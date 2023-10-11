#include "main.h"

/**
 * _islower - tests if a letter is lower case
 *
 * Return: Always an int
 *
 * @c: Number to pass to _islower function
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
