#include "main.h"

/**
 * _isdigit - it check 0 to 9
 * @c: parameter
 * Return: 0 if fail and 1 if success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
