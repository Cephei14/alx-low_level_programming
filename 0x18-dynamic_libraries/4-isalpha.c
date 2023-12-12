#include "main.h"

/**
 * _isalpha - function that check c is a letter, lowercase or uppercase
 * @c: test letter
 * Return: 1 if c is a letter, lowercase or uppercase or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
