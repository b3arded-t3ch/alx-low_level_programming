#include "main.h"
#include <stdlib.h>
#include <string.h>

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

	unsigned int i, n1, n2;

	n1 = strlen(s1);
	n2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= n2)
	{
		n = n2;
	}
	ns = malloc((n1 + n) + 1);
	if (ns == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		ns[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		ns[n1 + i] = s2[i];
	}
	return (ns);
}
