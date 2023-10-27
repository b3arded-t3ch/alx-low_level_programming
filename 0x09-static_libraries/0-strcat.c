#include "main.h"

/**
 * _strcat - concatenates two strings
 * Return: returns a pointer
 * @dest: the destination string
 * @src: the source string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
