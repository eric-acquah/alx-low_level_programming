#include "main.h"

/**
 *string_toupper - Convert lowercase letters in strings to uppercase letters
 *@str: String to convert into uppercase letters
 *Return: Pointer to the string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) -= 32;
		}
	}

	return (str);
}
