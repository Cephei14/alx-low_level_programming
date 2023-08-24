#include "main.h"

/**
 *leet - function that encodes a string into 1337.
 *@c: the input
 *Return: c
 */

char *leet(char *c)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char A[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = A[j];
			}
		}


	}
	return (c);
}
