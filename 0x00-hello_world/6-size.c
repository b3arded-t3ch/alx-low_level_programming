#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %1ld byte(s)\n", sizeof(char));
	printf("size of an int: %1ld byte(s)\n", sizeof(int));
	printf("size of a long int: %1ld  byte(s)\n", sizeof(long int));
	printf("size of a long long: %1ld byte(s)\n", sizeof(long long));
	printf("size of a float: %1ld byte(s)\n", sizeof(float));

	return (0);
}
