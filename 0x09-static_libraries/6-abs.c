#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @i: number to make its absolute value
*Return: 0 if positive and absolute value if negetive
*/

int _abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}
