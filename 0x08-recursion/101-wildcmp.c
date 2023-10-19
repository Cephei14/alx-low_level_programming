#include "main.h"

int _len(char *s);
int wildcmp(char *s1, char *s2);
int test_cmp(char *, char *, int, int, int, int);

/**
 * _len - function that calculate length of a string
 * @s : the string
 * Return: length
 */

int _len(char *s)
{
	int l;

	l = 0;
	if (*s != '\0')
	{
		l = l + 1;
		l = l + _len(s + 1);
	}
	return (l);
}

/**
 * test_cmp - function that compare two strings
 * @s1: string 1
 * @s2: string 2
 * @i1: index for s1
 * @i2: index for s2
 * @l1: length of s1
 * @l2: length of s2
 * Return: 0 or 1
 */

int test_cmp(char *s1, char *s2, int i1, int i2, int l1, int l2)
{
	if (i1 == l1 && i2 == l2)
		return (1);
	if (i2 < l2 && s2[i2] == '*')
	{
		return (test_cmp(s1, s2, i1, i2 + 1, l1, l2) ||
				(i1 < l1 && test_cmp(s1, s2, i1 + 1, i2, l1, l2)));
	}
	if (i1 < l1 && i2 < l2 && s1[i1] == s2[i2])
	{
		return (test_cmp(s1, s2, i1 + 1, i2 + 1, l1, l2));
	}
	return (0);
}

/**
 * wildcmp - function that compare two string based on *
 * @s1: first string
 * @s2: second string
 * Return: 0 or 1
 */

int wildcmp(char *s1, char *s2)
{
	int l1 = _len(s1);
	int l2 = _len(s2);

	return (test_cmp(s1, s2, 0, 0, l1, l2));
}
