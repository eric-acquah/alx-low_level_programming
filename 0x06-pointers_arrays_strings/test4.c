#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *main - test functions
 *
 *Return 0 (Success)
 */

int main(void)
{
	char s1[98];
	char *ptr;
	int i;

	for (i = 0; i < 98 - 1; i++)
	{
		s1[i] = '*';
	}
	s1[i] = '\0';
	printf("%s\n", s1);
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
	printf("%s\n", s1);
	printf("%s\n", ptr);
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
	printf("%s", s1);
	printf("%s", ptr);
	for (i = 0; i < 98; i++)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", s1[i]);
	}
	printf("\n");

	ptr = _strncpy(s1, "Let's do the checking", 21);
	printf("%s\n", ptr);
	ptr = _strncpy(s1, "Let's do the checking", 8);
	printf("%s\n", ptr);
	ptr = _strncpy(s1, "Let's do the checking", 100);
	printf("%s\n", ptr);

	return (0);
}

char *_strncpy(char *dest, char *src, int n)
{
	/* int count = 0; */
	int j;
	char *str = src;

	/*for (i = 0; *(str + i) != '\0'; i++)
	{
		count++;
		}*/

	for (j = 0;  j < n  && *(str + j) != '\0'; j++)
	{
		*(dest + j) = *(str + j);
	}


	for (; j < n; j++)
	{
		*(dest + j) = '\0';
	}

	*(dest + j) = '\0';

	return (dest);
}


int _putchar(char c)
{
	return (write(1, &c, 1));
}
