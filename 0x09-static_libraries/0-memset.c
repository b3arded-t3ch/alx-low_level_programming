#include "main.h"

/**
 * _memset - fills a block of memory with specific value
 * Return: Returns a pointer to the string
 * @s: The string memory to be filled
 * @b: the desired value
 * @n: The size of memory to fill with the new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
	}
	return (s);
}
