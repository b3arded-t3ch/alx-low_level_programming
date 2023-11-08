#include "function_pointers.h"

/**
 * int_index -  searches for an integer
 * Return: 0 (successful), -1 (unsuccessful)
 * @array: the array in which to check for integer
 * @size: size or length of the array
 * @cmp: the function to work on array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	int result;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
		{
			return (i);
		}
	}
	return (-1);
}
