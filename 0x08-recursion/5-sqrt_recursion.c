#include "main.h"

/**
 * _sqrt_recursive - approximative function for square
 * _sqrt_recursion - function that calculate sqrt
 * @s: parameter
 * @n: number in question
 * @e:parameter
 * Return: square root or -1
 */

int _sqrt_recursive(int n, int s, int e)
{
	int m, sq;

	m = s + (e - s) / 2;
	sq = m * m;
	if (s > e)
	{
		return (-1);
	}
	if (sq == n)
	{
		return (m);
	}
	else if (sq < n)
	{
		return (_sqrt_recursive(n, m + 1, e));
	}
	else
	{
	return (_sqrt_recursive(n, s, m - 1));
	}
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
	return (_sqrt_recursive(n, 0, n));
}
