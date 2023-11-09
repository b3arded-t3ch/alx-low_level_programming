#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * followed by a new line
 *
 * Return: Nothing
 * @separator: argument separator
 * @n: Number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_numbers;
	unsigned int i, my_nums;

	va_start(my_numbers, n);

	for (i = 0; i < n; i++)
	{
		my_nums = va_arg(my_numbers, unsigned int);
		printf("%d", my_nums);

		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(my_numbers);
	printf("\n");
}
