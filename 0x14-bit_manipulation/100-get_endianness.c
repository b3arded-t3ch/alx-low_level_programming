#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_endianness - tell wether little or big endian
 *
 * Return: Nothing
 */
int get_endianness(void)
{
	int x = 1;

	char *byte = (char *)&x;

	if (*byte == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
