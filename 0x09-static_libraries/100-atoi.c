#include "main.h"

/**
 * _atoi - Converts string to integer
 * Return: An integer
 * @s: The string to convert
 */

int _atoi(char *s)
{
	int i = 0;

	int sig = 1;

	unsigned int unsig = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sig *= -1;

			i++;
		}
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		unsig = (unsig * 10) + (s[i] - '0');
		i++;
	}
	unsig *= sig;
	return (unsig);
}
