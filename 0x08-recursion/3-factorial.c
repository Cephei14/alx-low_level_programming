#include "main.h"

/**
 * factorial - factorial function
 * @n: number in question
 * Return: n!
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
