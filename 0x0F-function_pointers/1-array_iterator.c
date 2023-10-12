#include "function_pointers.h"

/**
 * array_iterator - function that use array and function pointer
 * @array: array's name
 * @size: size of the array
 * @action: pointer to a function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
