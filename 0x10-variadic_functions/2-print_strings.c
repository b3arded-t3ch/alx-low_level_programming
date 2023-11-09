#include <stdio.h>
#include <stdarg.h>

/**
 *  print_strings - prints strings, followed by a new line
 *
 *  Return: Nothing
 *  @separator: separates each string from another
 *  @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_strings;
	unsigned int i;
	char *ms;

	va_start(my_strings, n);

	for (i = 0; i < n; i++)
	{
		ms = va_arg(my_strings, char *);
		if (ms == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ms);
			if (i < n - 1)
			{
				if (separator != NULL)
				{
					printf("%s", separator);
				}
			}
		}
	}
	va_end(my_strings);
	printf("\n");
}
