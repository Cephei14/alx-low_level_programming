#include <stdio.h>

/**
 * main - main fuction
 *
 * Return: return 0 if succes
 *
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

