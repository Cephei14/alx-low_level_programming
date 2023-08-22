#include "main.h"

/**
*rev_string - function that reverse a text
*@s: the text reversed
*Return: 0
*/

void rev_string(char *s)
{
	int i;
	int j;
	char c;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	for (i = 0; i < j / 2; i++)
	{
		c = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = c;
	}
}
