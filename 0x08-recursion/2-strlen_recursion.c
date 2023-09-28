#include "main.h"

/**
 *_strlen_recursion - function that return the length of a string
 *@s: the string
 *Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	if (*s != '\0')
	{
	l = l + 1;
	l = l + _strlen_recursion(s + 1);
	}
	return (l);
}
