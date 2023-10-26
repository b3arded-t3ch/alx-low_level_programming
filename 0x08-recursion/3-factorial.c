#include "main.h"

/**
 * factorial - returns the factorial of n
 * Return: Always an int
 * @n: The int parameter
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 1)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
