#include "main.h"

/**
 * _sqrt_recursive - approximative function for square
 * @i: parameter
 * @n: number in question
 * Return: square root or -1
 */

int _sqrt_recursive(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursive(n, i + 1));
}

/**
 ** _sqrt_recursion - square root of number function
 *@n: parameter
 *Return: -1 if error or sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursive(n, 0));
}
