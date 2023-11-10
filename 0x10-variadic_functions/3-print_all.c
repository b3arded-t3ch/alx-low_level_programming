#include <stdarg.h>
#include <stdio.h>
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
	char *s;
	int check;
	int i = 0;

	va_start(my_box, format);
	while (format != NULL && format[i] != '\0')
	{
		check = 0;
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(my_box, int));
			break;
			case 'i':
			printf("%d", va_arg(my_box, int));
			break;
			case 'f':
			printf("%f", va_arg(my_box, double));
			break;
			case 's':
			s = va_arg(my_box, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			printf("%s", s);
			break;
			default:
			check = 1;
			break;
		}
		if (format[i + 1] != '\0' && check == 0)
		{
			printf(", ");
		}
		i++;
	}
	va_end(my_box);
	printf("\n");
}
