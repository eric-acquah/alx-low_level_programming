#include <stdio.h>

/**
 *main - print all lowercase letters of the alphabet exccept q and e
 *
 *Return: 0 (Success)
 */

int main(void)
{
	char apa = 'a';

	while (apa <= 'z')
	{
		if (apa == 'e' || apa == 'q')
		{
			apa++;
		}
		putchar(apa);
		apa++;
	}
	putchar('\n');
	return (0);
}
