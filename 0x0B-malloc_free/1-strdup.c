#include "main.h"
#include <stdlib.h>

/**
 *_strdup - create a duplicate of string pointed to by str
 *@str: string argument to be copied
 *Return: Pointer to duplicate string else return NULL
 */

char *_strdup(char *str)
{
	/*initialize count to get string lenght*/
	int count = 0;
	int i, j;
	/*duplicate string pointer*/
	char *nstr;

	/*check if str is pointing to nothing*/
	if (str == NULL)
		return (NULL);

	/*get lenght of str*/
	for (i = 0; *(str + i) != '\0'; i++)
		count++;

	/*allocate memory space equal to the size of str including '\0'*/
	nstr = (char *)malloc(sizeof(char) * (count + 1));

	/*check if memory space was not allocated*/
	if (nstr == NULL)
		return (NULL);

	/*copy contents within str into the newly allocated space*/
	for (j = 0; *(str + j) != '\0'; j++)
		*(nstr + j) = *(str + j);

	/*add terminating null byte to string*/
	*(nstr + (count + 1)) = '\0';

	return (nstr);
}
