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

	p = (dog_t *)malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	l1 = l2 = 0;
	while (name[l1] != '\0')
		l1++;
	while (owner[l2] != '\0')
		l2++;
	p->name = malloc(sizeof(l1 + 1));
	if (p->name == NULL)
		return (NULL);
	p->owner = malloc(sizeof(l2 + 1));
	if (p->owner == NULL)
		return (NULL);
	i = j = 0;
	while (i < l1)
	{
		p->name[i] = name[i];
		i++;
	}
	p->name[i] = '\0';
	while (j < l2)
	{
		p->owner[j] = owner[j];
		j++;
	}
	p->owner[j] = '\0';
	p->age = age;
	return (p);
}
