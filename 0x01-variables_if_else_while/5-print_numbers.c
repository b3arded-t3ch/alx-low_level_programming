#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char num;

	for (num = '0'; num >= '0' && num <= '9';)
	{
		putchar(num);
		num++;
	}

	putchar('\n');
	return (0);
}
