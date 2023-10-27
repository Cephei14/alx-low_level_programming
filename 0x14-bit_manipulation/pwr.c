#include "main.h"

/**
 * pwr - function that calculate power of a number
 * @x: number in question
 * @i: x raise to power of i
 * Return: x to power of i
 */

unsigned int pwr(unsigned int x, unsigned int i)
{
	unsigned int n = 1, j = 0;

	while (j < i)
	{
		n *= x;
		j++;
	}
	return (n);
}
