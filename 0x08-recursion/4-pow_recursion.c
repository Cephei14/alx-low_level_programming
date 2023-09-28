#include "main.h"

/**
 *_pow_recursion- function that calculate power of a number
 *@x:: the umber in question
 *@y: the power to raise to
 *Return: power of the number
 */

int _pow_recursion(int x, int y)
{
	int p;

	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	p = x * _pow_recursion(x, y - 1);
	return (p);
}
