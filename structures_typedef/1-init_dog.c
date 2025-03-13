#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize  dog
 * @d: ptr dog
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 * Return: dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
