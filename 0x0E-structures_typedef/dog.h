#ifndef STRUCT
#define STRUCT
#include <stdlib.h>
#include <stdio.h>

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


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
