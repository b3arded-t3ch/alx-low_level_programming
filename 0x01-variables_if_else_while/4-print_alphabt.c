#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z' && alphabet != 'e' && alphabet != 'q')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
