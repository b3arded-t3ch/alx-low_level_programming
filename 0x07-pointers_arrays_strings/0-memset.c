#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * Return: Returns a pointer to the memory area
 * @s: The parameter string
 * @b: The size memory to fill
 * @n: The number of memory to fill
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
