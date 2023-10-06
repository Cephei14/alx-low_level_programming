#include "main.h"

/**
 * main - the main function
 * @argc: number of args
 * @argv: value of args
 * Return: 0 of succes and 1 if error
 */

int main(int argc, char **argv)
{
	int j, v, r = 0;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	v = atoi(argv[1]);
	if (v < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && v >= 0; j++)
	{
		while (c[j] <= v)
		{
			r++;
			v -= c[j];
		}
	}
	printf("%d\n", r);
	return (0);
}
