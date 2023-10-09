#include "main.h"

/**
 * string_nconcat - function that concat two strings
 * @s1: first string
 * @s2: second string
 * @n: size of bytes allocated for s2
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int x, y, l1, l2;

	l1 = l2 = 0;
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (n >= l2)
		p = malloc(l1 + l2 + 1);
	else
		p = malloc(l1 + n + 1);
	if (p == NULL)
		return (NULL);
	x = y = 0;
	while (x < l1)
	{
		p[x] = s1[x];
		x++;
	}
	while (n < l2 && x < (l1 + n))
	{
		p[x++] = s2[y++];
	}
	while (n >= l2 && x < (l1 + l2))
		p[x++] = s2[y++];
	p[x] = '\0';
	return (p);
}
