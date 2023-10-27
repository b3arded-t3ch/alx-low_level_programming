#include "main.h"

/**
 * _strcpy - program copies the string pointed to by src
 * Return: string value
 * @dest: destination parameter
 * @src: source parameter
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
