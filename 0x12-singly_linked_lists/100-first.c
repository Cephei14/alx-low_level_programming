#include "lists.h"
void printf_first(void)__attribute__((constructor));
/**
 * printf_first - function that print a string before main
 * Return: nothing
 */

void printf_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
