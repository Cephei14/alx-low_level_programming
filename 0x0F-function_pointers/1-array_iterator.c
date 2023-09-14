#include "function_pointers.h"

/**
 * array_iterator - print an array of elements
 *@array: string
 *@size: size of elements
 *@action:the way or type of printing
 *Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
