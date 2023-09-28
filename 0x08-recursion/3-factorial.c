#include "main.h"

/**
 *factorial- function that calculate factorial of a number
 * @n: the number to calculate n!
 * Return: factorial of the number or error if n negative
 */

int factorial(int n)
{
	int f = 0;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n <= 1)
			return (1);
		f = n * factorial(n - 1);
		return (f);
	}
}
