#include "main.h"
#include <stddef.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * Return: Returns a pointer to the byte in string
 * @s: First string parameter
 * @accept: second string parameter
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	int j;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
