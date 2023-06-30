#include "dog.h"

/**
 *new_dog - create new dog database
 *@name: pointer to dog name
 *@age: age of  dog
 *@owner: pointer to 'owner' string
 *Return: ponter to a struct dog type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_copy, *owner_copy;
	int name_len, owner_len;
	dog_t *link;

	/*Assigned space for struct dog object*/
	link = (dog_t *)malloc(sizeof(dog_t));

	if (link == NULL)
		return (NULL);

	name_len = _strlen(name);/*getting lenght of the strings*/
	owner_len = _strlen(owner);

	link->name = (char *)malloc(sizeof(char) * (name_len + 1));
	link->owner = (char *)malloc(sizeof(char) * (owner_len + 1));

	if (link->name == NULL || link->owner == NULL)
		return (NULL);

	/*Assign values to members*/
	link->name = name;
	link->owner = owner;
	link->age = age;

	/*store a copy of owner and name string*/
	name_copy = (char *)malloc(sizeof(char) * (name_len + 1));
	owner_copy = (char *)malloc(sizeof(char) * (owner_len + 1));

	_strcpy(name_copy, link->name);
	_strcpy(owner_copy, link->owner);

	return (link);
}
