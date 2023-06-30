#include "dog.h"


/**
 *init_dog - initialize dog struct object
 *@d: pointer to struct dog object
 *@name: assumed name of dog
 *@age: assumed age of the dog
 *@owner: pointer to string for 'owner of dog'
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		exit(1);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
