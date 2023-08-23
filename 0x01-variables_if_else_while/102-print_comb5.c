#include <stdio.h>

/**
 * main - main c function
 * Return: 0
 */

int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i <= 98; i++)
	{
		a = i / 10;
		b = i % 10;
		for (j = i + 1; j <= 99; j++)
		{
			c = j / 10;
			d = j % 10;
			if (i != j)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				if (a != 9 || b != 8 || c != 9 || d != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
