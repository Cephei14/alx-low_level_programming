#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - print a name
 * @name: a string
 * @f: a pointer
 * Return: 0
 */

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}