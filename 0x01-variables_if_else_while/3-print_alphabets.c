#include <stdio.h>

/**
 *main - print all letters of the alphabets both lower and uppercase.
 *
 *Return: 0 (Success)
 */

int main(void)
{
	char alpha = 'a';
	char bet = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	while (bet <= 'Z')
	{
		putchar(bet);
		bet++;
	}
	putchar('\n');
	return (0);
}
