#include "main.h"

/**
 * _strncpy - copies string pointed to by src to buffer pointed by dest
 * Return: pointer dest
 * @dest: destination string
 * @src: source string
 * @n: size of bytes allocated to src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
