#include "main.h"

/**
 * test_islower - Test the _islower function
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
