#include "main.h"

/**
 * check - function that verify if the number have a natural sqrt
 * @n: the number in question
 * @i: number to verify that keep incrimenting
 * Return: sqrt of n or -1 or increment
 */

int check(int n, int i)
{
	int k;

	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	k = check(n, i + 1);
	return (k);
}

/**
 *_sqrt_recursion- function that give the square root of a number
 *@n: the number in question
 *Return: -1 or sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check(n, 0));
}
