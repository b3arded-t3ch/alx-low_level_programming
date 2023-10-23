#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * Return: Returns a pointer to the first
 * occurrence of the character c in the string.
 * @s: the string parameter.
 * @c: the character parameter
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
