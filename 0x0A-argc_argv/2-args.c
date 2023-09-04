#include "main.h"

/**
 * main - main function
 * @argc: number of command line
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
