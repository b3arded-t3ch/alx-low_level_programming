#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * Return: Returns a pointer to dest
 * @src: the source parameter
 * @dest: the destination parameter
 * @n: the size of bytes to fill
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
