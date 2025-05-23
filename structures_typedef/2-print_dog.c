#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints the elements of a struct dog
 * @d: Pointer to struct dog
 *
 * Description: Prints each member of the struct. If a member is NULL,
 * it prints (nil) instead. If d is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");

}
