#include "dog.h"

/**
 * new_dog - function that create a new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: a new dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int l1, l2, i, j;
	char *n, *o;

	p = (dog_t *)malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	l1 = l2 = 0;
	while (name[l1] != '\0')
		l1++;
	while (owner[l2] != '\0')
		l2++;
	n = malloc(sizeof(l1 + 1));
	if (n == NULL)
		return (NULL);
	o = malloc(sizeof(l2 + 1));
	if (o == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		n[i] = name[i];
	n[i + 1] = '\0';
	for (j = 0; j < l2; j++)
		o[i] = owner[j];
	o[j + 1] = '\0';
	p->name = n;
	p->age = age;
	p->owner = o;
	return (p);
}
