#include "main.h"

/**
 *_islower - function that check lowercase
 *@c: parameter to test
 * Return: 1 if lowercase or 0 if else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
