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
	int i = 0;

	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		j++;
		i++;
		n--;
	}
	dest[i] = '\0';
	
	return (dest);
}
