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
	/* char *name, *owner; */
	int name_len, owner_len;
	dog_t *link;

	/*Assigned space for struct dog object*/
	link = (dog_t *)malloc(sizeof(dog_t));

	if (link == NULL)
		return (NULL);

	name_len = _strlen(name);/*getting lenght of the strings*/
	owner_len = _strlen(owner);

	link->name = (char *)malloc(sizeof(char) * (name_len + 1));
	if (link->name == NULL)
		return (NULL);

	link->owner = (char *)malloc(sizeof(char) * (owner_len + 1));
	if (link->owner == NULL)
		return (NULL);

	/*Assign values to members*/
	link->name = name;
	link->owner = owner;
	link->age = age;

	return (link);
}


/**
 *_strlen - get the lenght of a string
 *@str: input string
 *Return: lenght of string
 */

int _strlen(char *str)
{
	int count;

	for (count = 0; str[count] != '\0';)
		count++;

	return (count);
}
