#include "main.h"

/**
 * _strlen - program returns length of a string
 * Return: length
 * @s: the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
