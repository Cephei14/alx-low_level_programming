#include "main.h"
#include <stdio.h>

/**
 * main - the main function
 * @argc: number or agruments
 * @argv: name of arguments
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	argc = argc - 1;
	printf("%d\n", argc);
	return (0);
}
