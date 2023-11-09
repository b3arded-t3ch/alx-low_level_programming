#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 *
 * Return: the sum of the parameters
 * @n: number of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mynumbers;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(mynumbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(mynumbers, unsigned int);
	}
	va_end(mynumbers);

	return (sum);
}
