#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * Return: Always 0 on success, 1 on error
 * @argc: number of arguments
 * @argv: array of arguments
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);

		result = n1 * n2;
		printf("%d\n", result);
	}
	return (0);
}
