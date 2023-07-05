#ifndef MANIPULTE
#define MANIPULTE

/**
 *arg_len - return the length of strings
 *@str: string argument
 *Return: length of string
 */

int arg_len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0';)
		i++;

	return (i);
}


/**
 *_strcat - Append the string pointed by src to the  one pointed by dest
 *@dest: pointer to destination string
 *@src: pointer to source string
 *Return: Pointer to dest string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	int count = 0;
	char *str = dest;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		count++;
	}

	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(str + (count)) = *(src + j);
		str++;
	}

	*(str + count) = '\n';

	return (dest);
}

/**
 *_strcpy - copy characters from src to dest
 *@dest: detination string pointer
 *@src: source string pointer
 *Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int j;
	char *str = src;

	for (j = 0; *(str + j) != '\0'; j++)
	{
		*(dest + j) = *(str + j);
	}

	*(dest + j) = '\n';

	return (dest);

}

#endif
