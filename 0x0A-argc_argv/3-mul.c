#include "main.h"

/**
 * main - main function
 * @argc: number of command line
 * @argv: array of strings
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
