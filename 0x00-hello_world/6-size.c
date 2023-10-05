#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %2ld byte(s)\n", sizeof(char));
	printf("size of an int: %2ld byte(s)\n", sizeof(short int));
	printf("size of a long int: %2ld  byte(s)\n", sizeof(long int));
	printf("size of a long long: %2ld byte(s)\n", sizeof(double));
	printf("size of a float: %2ld byte(s)\n", sizeof(float));

	return (0);
}
