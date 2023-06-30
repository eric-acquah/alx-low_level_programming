#include "dog.h"

/**
 *print_dog - print the value of all the members within struct object
 *
 *@d: pointer to struct dog object
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		printf("Name : %p\n", d->name);
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age != 0)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age : %f\n", 0.0);
	}
	if (d->owner == NULL)
	{
		printf("Owner : %p\n", d->owner);
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
