#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - square root of number function
 * @n: number in question
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
	double res;

	res = sqrt(n);
	if (n < 0)
	{
		return (-1);
	}
	if (res - (int)res == 0)
	{
		return (res);
	}
	else
	{
		return (-1);
	}
}
