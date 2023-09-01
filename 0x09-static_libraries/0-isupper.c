#include "main.h"

/**
 * _isupper - it check uppercases
 * @c: a parameter
 * Return: 0 if fail or 1 if success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
