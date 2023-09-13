#include "main.h"

/**
 *string_nconcat - function that concatenates two strings
 *@s1: string1
 *@s2: string2
 *@n: number of bytes
 *Return: c
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	while (s1 && s1[k])
		k++;
	while (s2 && s2[l])
		l++;
	if (n < l)
		c = malloc(sizeof(char) * (k + n + 1));
	else
		c = malloc(sizeof(char) * (k + l + 1));
	if (!c)
		return (NULL);
	while (i < k)
	{
		c[i] = s1[i];
		i++;
	}
	while (n < l && i < (k + n))
		c[i++] = s2[j++];
	while (n >= l && i < (k + l))
	{
		c[i++] = s2[j++];
	}
		c[i] = '\0';
	return (c);
}