#include "main.h"

/**
 * main - main function
 * @argc: number of command line
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char **argv)
{
	int cents;
	int m = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents = cents - 25;
		}
		else if (cents >= 10)
		{
			cents = cents - 10;
		}
		else if (cents >= 5)
		{
			cents = cents - 5;
		}
		else if (cents >= 2)
		{
			cents = cents - 2;
		}
		else if (cents >= 1)
		{
			cents = cents - 1;
		}
		m = m + 1;
	}
	printf("%d\n", m);
	return (0);
}
