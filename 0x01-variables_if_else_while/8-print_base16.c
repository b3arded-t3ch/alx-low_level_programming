#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int hex;

	hex = 0;

	while (hex < 16)
	{
		if (hex >= 0 && hex <= 9)
			putchar(hex +'0');
		if (hex >= 10 && hex <= 15)
			putchar(hex - 10 + 'a');
		hex++;
	}
	putchar('\n');
	return (0);
}
