#include "function_pointers.h"

/**
 * print_name - function that print a name
 * @name: the name
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
