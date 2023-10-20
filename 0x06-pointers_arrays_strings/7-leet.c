#include "main.h"

/**
 * leet - 
 * Return: a string
 * @input: parameter
 */

char *leet(char *input)
{
	int j;

	int i;
	
	char from[] = "aeotlAEOTL";
	
	char to[]   = "430711";
	
	for (i = 0; input[i] != '\0'; i++)
	{
		for (j = 0; from[j] != '\0'; j++)
		{
			if (input[i] == from[j])
			{
				input[i] = to[j];
				break;
			}
		}
	}
	return (input);
}
