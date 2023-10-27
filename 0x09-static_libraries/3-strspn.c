#include "main.h"

/**
 * _strspn - get length of a substring
 * Return: number of bytes in the initial segment
 * @s: first string parameter
 * @accept: second string parameter
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	unsigned int j;

	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		unsigned int match = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (!match)
		{
			return (count);
		}
		count++;
	}
	return (count);
}
