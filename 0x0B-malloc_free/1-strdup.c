#include "main.h"

/**
 *_strdup - it make pointer to a new string
 *@str:the string in question
 *Return: NULL or pointer
 */

char *_strdup(char *str)
{
	int i = 0, j;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		a[j] = str[j];
	}
	return (a);
}
