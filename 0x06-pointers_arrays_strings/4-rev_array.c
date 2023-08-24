#include "main.h"

/**
 *reverse_array - it reverse the content of an array of integers.
 *@a: array
 *@n: size of array
 *Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, r;

	for (i = 0; i < n / 2; i++)
	{
		r = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = r;
	}
}
