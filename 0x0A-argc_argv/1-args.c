#include "main.h"
#include <stdio.h>

/**
 * main - program prints value of argc
 * Return: Always 0
 * @argc: the number of arguments
 * @argv: the arguments
 */
int main(int argc, char *argv[])
{

	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
