#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int val = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] == '0' || b[i] == '1')
	{
		val = val << 1;
		val += (b[i] - '0');
		i++;
	}

	if (b[i] != '\0')
	{
		return (0);
	}
	return (val);
}
