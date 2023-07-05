/**
 *rev_string - reverse strings
 *
 *@s: Stirng pointer argument
 */

void rev_string(char *s)
{
 	int size = 0;
 	int i, j;
 	char tmp;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		size++;
	}
	size = size - 1;

	for (j = 0; j < size; j++)
	{
		tmp = *(s + j);
		*(s + j) = *(s + size);
		*(s + size) = tmp;
		size--;
	}
}

/**
 *_strcmp - compare two strings
 *@s1: Points to the first string
 *@s2: Points to the second string
 *Return: (-1) if str1 < str2; (1) if str1 > str2 (0) if both match
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int diff;
	int diff_inverse;

	for (i = 0; *(s1 + i) != '\0' && *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) < *(s2 + i))
		{
			diff = *(s1 + i) - *(s2 + i);
			return (diff);
		}
		else if (*(s1 + i) > *(s2 + i))
		{
			diff_inverse = *(s1 + i) - *(s2 + i);
			return (diff_inverse);
		}
	}

	return (0);
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

	*(dest + j) = '\0';

	return (dest);

}
