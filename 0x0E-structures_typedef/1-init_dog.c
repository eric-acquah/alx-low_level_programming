#include "main.h"

/**
 *struct dog - store dog info
 *@name: name of dog
 *@age: age of dog
 *@owner: client name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 *init_dog - initialize dog struct object
 *@d: pointer to struct dog object
 *@name: assumed name of dog
 *@age: assumed age of the dog
 *@owner: pointer to string for 'owner of dog'
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
