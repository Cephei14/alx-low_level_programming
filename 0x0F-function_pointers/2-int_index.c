#include "function_pointers.h"

/**
 * int_index - function that search for integers
 * @size: size of the array
 * @array: name of the array
 * @cmp: pointer to a function
 * Return: 0 or 1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, p;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		p = (*cmp)(array[i]);
		if (p == 1)
			return (i);
	}
	return (-1);
}
