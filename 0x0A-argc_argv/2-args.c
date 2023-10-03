#include "main.h"

/**
 * main - the main function
 * @argc: number or agruments
 * @argv: name of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
