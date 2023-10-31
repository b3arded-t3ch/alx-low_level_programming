#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * Return: return 0
 * @argc: number of arguments
 * @argv: arguments variables
 */
int main(int argc, char *argv[])
{
	int i;

	int result = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)

	{
		if (atoi(argv[i]) < '0' && atoi(argv[i]) > '9')
		{
			printf("Error\n");
			return (1);
		}
		if ((atoi(argv[i]) < 'a' && atoi(argv[i]) > 'z') || (atoi(argv[i]) < 'A' && atoi(argv[i]) > 'Z'))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
