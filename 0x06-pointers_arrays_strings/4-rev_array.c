#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * Return: Always void
 * @a: the name of the array
 * @n: number of element of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
