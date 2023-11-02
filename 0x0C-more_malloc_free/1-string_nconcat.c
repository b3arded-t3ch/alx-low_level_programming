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
	unsigned int size, j, i;

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
		size = n1 + n + 1;
	}
	ns = malloc(sizeof(char) * size);
	if (ns == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n1; i++)
	{
		ns[i] = s1[i];
	}
	for (j = 0; j < n; i++, j++)
	{
		ns[i] = s2[j];
	}
	ns[i] = '\0';
	return (ns);
}
