#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * Return: pointer to the located string
 * @haystack: source of string
 * @needle: substring to find
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;

		n = needle;

		while (*haystack && *n && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
		{
			return (h);
		}
		haystack = h + 1;
	}
	return (NULL);
}
