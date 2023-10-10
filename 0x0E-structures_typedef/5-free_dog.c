#include "dog.h"

/**
 * free_dog - function that free a dog in the memory of the program
 * @d: name of pointer
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
