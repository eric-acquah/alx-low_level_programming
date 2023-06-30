#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - free memory space dynamicaly allocated to struct dog onject
 *@d: pointer to struct dog object
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
