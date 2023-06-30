#include "dog.h"

/**
 *print_dog - print the value of all the members within struct object
 *
 *@d: pointer to struct dog object
 */

void print_dog(struct dog *d)
{
	char *n_a = "(nil)";

	if (d == NULL)
		return;

	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name : %s\n", n_a);
	}
	if (d->age != 0)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age : %s\n", n_a);
	}
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner : %s\n", n_a);
	}
}
