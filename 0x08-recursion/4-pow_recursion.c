#include "main.h"

/**
 * _pow_recursion - power function
 * @x: number to rais his power
 * @y: value of power raised
 * Return: -1 or power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
