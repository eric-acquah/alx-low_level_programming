#include <stdio.h>

/**
 *main - print numbers in base 16
 *
 *Return: 0 (success)
 */

int main(void)
{
	char ahex = 'a';
	int hex = 0x0;

	while (hex <= 0x9)
	{
		putchar(hex + '0');
		hex++;
	}

	while (ahex <= 'f')
	{
		putchar(ahex);
		ahex++;
	}
	putchar('\n');
	return (0);
}
