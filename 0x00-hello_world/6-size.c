#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
    
    // Specify sizes for long int and long long based on the target architecture
    #ifdef __LP64__
        printf("Size of a long int: %ld byte(s)\n", sizeof(long));
        printf("Size of a long long int: %ld byte(s)\n", sizeof(long long));
    #else
        printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
        printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
    #endif
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	
	return (0);
}
