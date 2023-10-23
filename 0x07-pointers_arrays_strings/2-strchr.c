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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
