/**
 * print_alpabet - make the alphabet
 *
 * Return: void
 */
void print_alphabet(void);

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
