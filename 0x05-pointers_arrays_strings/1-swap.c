#include "main.h"

/**
 * swap_int - swaps integer values
 *
 * Return: Always null
 * @a: the first parameter
 * @b: the second parameter
 */
void swap_int(int *a, int *b)
{
	int t = *a;

	*a = *b;

	*b = t;
}
