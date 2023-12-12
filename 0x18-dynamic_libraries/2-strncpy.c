#include <string.h>
#include "main.h"

/**
 *_strncpy - function that copy a string
 *@dest: copy destination
 *@src: what to copy
 *@n: limiting the bytes of src to be transported
 *Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *c;

	c = strncpy(dest, src, n);
	return (c);
}
