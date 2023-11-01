#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concats all the arguments of a program
 * Return: a pointer to new string
 * @ac: argument count
 * @av: array of arguments
 */
char *argstostr(int ac, char **av)
{
	int i;

	int sl = 0;

	char *ns;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		sl += strlen(av[i]) + 1;
	}

	ns = malloc(sl * sizeof(char));
	if (ns == NULL)
	{
		return (NULL);
	}

	ns[0] = '\0';
	for (i = 0; i < ac; i++)
	{
		strncat(ns, av[i], sl - strlen(ns) - 1);
		strncat(ns, "\n", sl - strlen(ns) - 1);
	}
	strncat(ns, "\n", sl - strlen(ns) - 1);

	if ((int)strlen(ns) < sl - 1)
	{
		ns[strlen(ns) + 1] = '\0';
	}
	return (ns);
}
