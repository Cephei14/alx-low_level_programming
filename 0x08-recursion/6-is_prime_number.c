#include "main.h"

int check(int n, int i);

/**
 * is_prime_number - function that check if number is prime or not
 * @n: the number in question
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check(n, n - 1));
}

/**
 * check - function that check if n is primal
 * @n: number in question
 * @i: number to increment
 * Return: result if n is prime
 */

int check(int n, int i)
{
	int k = 0;

	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	k = check(n, i - 1);
	return (k);
}
