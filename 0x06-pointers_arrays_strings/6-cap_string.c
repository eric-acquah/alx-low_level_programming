#include "main.h"

/**
 *cap_string - Capitalize strings
 *@str: String argument pointer
 *Return: pointer to the string
 */

char *cap_string(char *str)
{
	int i;

	if (*str >= 'a' && *str <= 'z')
		*str -= 32;

	/*Loop through the entire string*/
	for (i = 0; *(str + i) != '\0'; i++)
	{
		/*If value is a word seperater execute the following code*/
		if (*(str + i) == ' ' || *(str + i) == '.' ||
		    *(str + i) == ',' || *(str + i) == ';' ||
		    *(str + i) == '?' || *(str + i) == '!' ||
		    *(str + i) == '"' || *(str + i) == '\n' ||
		    *(str + i) == '\t' || *(str + i) == '(' ||
		    *(str + i) == ')' || *(str + i) == '{' ||
		    *(str + i) == '}')
		{

			/*If the following value is lowercase convert to upper*/
			if (*(str + (i + 1)) >= 'a' && *(str + (i + 1)) <= 'z')
			{
				*(str + (i + 1)) -= 32;
			}
		}
	}

	return (str);
}
