#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenate the first n bytes of str2 to str1
 *@str1: first string argument
 *@str2: second string argument to append to str1
 *@n: number of bytes to copy from str2
 *Return: pointer to concatenated string
 */

char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	unsigned int i, j, k, len1, len2, size;
	char *str3;

	if (str1 == NULL) /*we are checking if the string args are not null*/
		len1 = 0; /*if true treat string as an empty string*/
	else
		len1 = str_len(str1); /*if != true store the lenght of the str*/
	if (str2 == NULL)
		len2 = 0;
	else
		len2 = str_len(str2);

	if (!(n >= str2)) /*if str2 > n, get only the 1st n bytes of str2*/
	{
		for (i = 0; i < n && *(str2 + i) != '\0';)
			i++;
		len2 = i; /*if true store that lenght rather than all of str2*/
	}

	size = len1 + len2; /*get the total lenght that the new str will take*/
	str3 = (char *)malloc(sizeof(char) + size++); /*allocate enough space*/

	if (str3 == NULL) /*Error_check:if malloc fails return null to pointer*/
		return (NULL);

	for (j = 0; j < len1; j++)
		*(str3 + j) = *(str1 + j); /*first copy str1 into new space*/
	for (k = 0; k < len2; k++)
		*(str3 + (len1 + k)) = *(str2 + k); /*then append str2 to str1*/

	*(str3 + (size + 1)) = '\0'; /*adding null terminating byte*/

	return (str3); /*return new string to pointer*/
}


/**
 *str_len - get lenght of strings
 *@str: string argument
 *Return: lenght of strings
 */

int str_len(char *str)
{
	int a;

	for (a = 0; *(str + a) != '\0';)
		a++;

	return (a);
}
