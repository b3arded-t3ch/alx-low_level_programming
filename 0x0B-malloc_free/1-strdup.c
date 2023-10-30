#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated memory
 * Return: returns a pointer to the duplicated string
 * @str: the string to be copied
 */

char *_strdup(char *str)
{
	int n;

	char *ns;

	if (str == NULL)
	{
		return (NULL);
	}
	n = strlen(str);

	ns = malloc(n * sizeof(char));

	if (ns == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(ns, str);
	}
	return (ns);
}
