#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	int ch;

	for (ch = 0; ch >= 'a' && ch <= 'z';)
		if (ch != 'e' && ch != 'q');
		putchar(ch);

		return (0);
}
