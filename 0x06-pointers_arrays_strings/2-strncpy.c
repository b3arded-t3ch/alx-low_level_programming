#include "main.h"

/**
 * _strncpy - copies string pointed to by src to buffer pointed to by dest
 *
 * Return: returns a pointer
 * @dest: destination string
 * @src: source string
 * @n: size of bytes allocated to src
 */
char *_strncpy(char *dest, char *src, int n)
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
