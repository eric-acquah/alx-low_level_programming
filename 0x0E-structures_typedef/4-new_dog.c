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

	if (name_copy == NULL || owner_copy == NULL)
		return (NULL);

	name_copy = _strcpy(name_copy, link->name);
	owner_copy = _strcpy(owner_copy, link->owner);

	return (link);
}

/**
 *_strcpy - copy strings from src to dest
 *@dest: destination string
 *@src: source string
 *Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL || src == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
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
