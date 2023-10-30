#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * Return: return a pointer to the new string
 * @s1: the first string
 * @s2: the second string to concat
 */
char *str_concat(char *s1, char *s2)
{
	int n;

	char *ns;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	ns = NULL;

	n = strlen(s2);

	ns = malloc((n + 1) * sizeof(char));

	if (ns == NULL)
	{
		return (NULL);
	}
	else
	{
		strcat(ns, s1);
		strcat(ns, s2);
	}
	return (ns);
}
