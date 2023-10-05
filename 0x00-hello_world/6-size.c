#include <stdio.h>

/**
 * Main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %2ld bytes\n", sizeof(char));
	printf("size of int: %2ld bytes\n", sizeof(short int));
	printf("size of long int: %2ld  bytes\n", sizeof(long int));
	printf("size of double: %2ld bytes\n", sizeof(double));
	printf("size of long double %2ld bytes\n", sizeof(long double));
	printf("size of float: %2ld bytes\n", sizeof(float));

	return (0);
}
