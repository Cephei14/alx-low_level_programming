#include "main.h"

/**
 * is_palindrome - function that check if a string is palindrom
 * @s: the string to check
 * Return: 0 if not palindrom, 1 if palindrom
 */

int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(char *s);
	if (l == 0)
	{
		return 1;
	}
	return(test_palindrome(s,0,l-1));
}

/*
 * test_palindrome - funtion that help testing if function is palindrom
 * @s: the string in question
 * @i: index that increment with string
 * @l: index that decrement starting from the end of the string
 * Return: 0 or 1
 */

int test_palindrome(char *s, int i, int l)
{
	if (i >= l)
		return 1;
	if (s[i] == s[l])
		return (test_palindrome(s, i + 1, l - 1));
	return (0);
}
