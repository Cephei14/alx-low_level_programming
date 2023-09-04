#include "main.h"
#include <ctype.h>

/**
 * main - main function
 * @argc: number of command line
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int plus = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		plus = plus + atoi(argv[i]);
	}
	printf("%d\n", plus);
	return (0);
}
