#include "main.h"
#include <stdio.h>

/**
 * main - prints its name
 * Return: Always 0
 * @argc: arguments count
 * @argv: arguments vector
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
