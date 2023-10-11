#include "main.h"

/**
 * test_islower - Test the _islower function
 *
 * @c: Number to pass to _islower function
 */
void _islower(int c)
{
	int r;

	r = _islower(c);
	_putchar(r + '0');
	_putchar('\n');

	return 0;
}
