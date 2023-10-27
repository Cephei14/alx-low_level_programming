#include "main.h"
unsigned int pwr(unsigned int x, unsigned int i);

/**
 * set_bit - function that set a bit at index
 * @n: number in question
 * @index: position to insert 1
 * Return: number with index added
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n + pwr(2, index);
	return (*n);
}

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
