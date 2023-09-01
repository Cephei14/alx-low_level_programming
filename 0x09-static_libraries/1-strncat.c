#include "main.h"

/**
 * _strncat - function that that cat two str & limiting # of bytes from src
 * @dest: destination of the operation
 * @src: source of operation
 * @n: number of bytes to be transported to dest from src
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	char *c;

	c = strncat(dest, src, n);
	return (c);
}
