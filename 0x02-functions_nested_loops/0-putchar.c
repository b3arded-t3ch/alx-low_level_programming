#include <stdio.h>
#include <unistd.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
		putchar('\n');
	}

	return (0);
}
