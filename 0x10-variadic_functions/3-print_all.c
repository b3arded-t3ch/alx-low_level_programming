#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 *
 * Return: Nothing
 * @format: list of types of arguments 
 * passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list my_box;

	const char *format_ptr = format;

	char *s;
	char c;
	int i;
	float f;


	va_start(my_box, format);

	while (*format_ptr)
	{
		if (*format_ptr == '%')
		{
			format_ptr++;
			if (*format_ptr == 'c')
			{
				c = va_arg(my_box, int);
				printf("%c", c);
			}
			else if (*format_ptr == 'i')
			{
				i = va_arg(my_box, int);
				printf("%i", i);
			}
			else if (*format_ptr == 'f')
			{
				f = va_arg(my_box, double);
				printf("%f", f);
			}
			else if (*format_ptr == 's')
			{
				s = va_arg(my_box, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
			}
			else
			{
				format_ptr++;
			}
		}
	}
	va_end(my_box);
	printf("\n");
}
