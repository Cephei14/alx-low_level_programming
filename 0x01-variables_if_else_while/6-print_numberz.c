#include <stdio.h>
/* more headers goes there */

/**
 * main - main fuction
 *
 * Return: return 0 if succes
 *
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
