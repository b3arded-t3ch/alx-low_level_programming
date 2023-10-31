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
	int n1;

	int n2;

	char *ns;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	ns = NULL;

	n1 = strlen(s1);
	n2 = strlen(s2);

	ns = malloc((n1 + n2 + 1) * sizeof(char));

	if (ns == NULL)
	{
		return (NULL);
	}
	else
	{
		ns[0] = '\0';

		strcat(ns, s1);
		strcat(ns, s2);
	}
	return (ns);
}
