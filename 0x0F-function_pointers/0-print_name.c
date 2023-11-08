#include "stdio.h"
#include "function_pointers.h"
/**
 * print_name - prints a name
 * Return: Nothing
 * @name: the name string to print
 * @f: the function that works on name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
