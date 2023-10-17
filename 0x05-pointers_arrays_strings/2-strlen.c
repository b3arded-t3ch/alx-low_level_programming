#include "main.h"

/**
 * _strlen - tells the length of a string
 *
 * Return: Always an integer
 * @s: the parameter
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
