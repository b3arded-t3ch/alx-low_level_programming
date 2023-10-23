#include "main.h"
#include <stddef.h>

/**
 * _strstr -  locates a substring.
 * Return: returns a pointer to the located string
 * @haystack: the parameter from which to find substring
 * @needle: the substring to find
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
