#include "3-calc.h"

/**
 * main - function that act like calculator
 * @argc: number of args
 * @argv: value of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*get_op_func)(operator)(num1, num2));
	return (0);
}
