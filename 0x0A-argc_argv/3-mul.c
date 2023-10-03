#include "main.h"

/**
 * main - the main function
 * @argc: number or agruments
 * @argv: name of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int mul = 1;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
