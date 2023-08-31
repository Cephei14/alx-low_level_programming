#include "main.h"

/**
 *_prime_num - check if a number is prime
 * @n: parameter
 * @i: tool
 * Return: 1 or 0
 */

int _prime_num(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime_num(n, i - 1));
}

/**
 *is_prime_number - tells if n is prime
 *@n: number in question
 *Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime_num(n, n - 1));
}
