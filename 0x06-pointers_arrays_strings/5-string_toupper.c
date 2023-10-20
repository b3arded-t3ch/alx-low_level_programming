#include "main.h"

/**
 * string_toupper - converts lowercase in string to upper
 *
 * Return: returns string of chararters
 * @str: the parameter
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
