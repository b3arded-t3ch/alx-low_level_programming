#include "main.h"
#include "string.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * Return: pointer to new space
 * @s1: the first string parameter
 * @s2: the second string parameter
 * @n: the max size of memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ns;
	unsigned int n1 = strlen(s1);
	unsigned int n2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ns = malloc(sizeof(char) * (n1 + n) + 1);
	if (ns == NULL)
	{
		return (NULL);
	}
	if (n >= n2)
	{
		strcat(ns, s1);
		strcat(ns + n1, s2);
	}
	else
	{
		strcat(ns, s1);
		strncat(ns + n1, s2, n);
	}
	ns[n1 + n] = '\0';
	return (ns);
}
