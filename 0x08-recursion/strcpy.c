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
