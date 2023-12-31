#include "main.h"

/**
 * _atoi - change string to int
 * @s: string in question
 * Return: int
 */

int _atoi(char *s)
{
	int sn = 1, i = 0;
	unsigned int r = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sn *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		r = (r * 10) + (s[i] - '0');
		i++;
	}
	r *= sn;
	return (r);
}

