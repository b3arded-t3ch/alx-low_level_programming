#include "main.h"

/**
 * _strncat - conacatenates two strings based on size n
 *
 * Return: Returns a pointer
 * @dest: the destinatiion string
 * @src: the source string
 * @n: the size of bytes allocated to src
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, strlen = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		strlen++;
	}
	for (j = 0; j < n && j < strlen; j++)
	{
		dest[strlen + j] = src[j];
	}

	return (dest);
}
