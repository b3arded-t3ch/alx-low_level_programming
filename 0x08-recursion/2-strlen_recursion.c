#include "main.h"

/**
 * _strlen_recursion - counts the length of a string
 * Return: Always an int, the count value
 * @s: The string parameter
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count += 1;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
