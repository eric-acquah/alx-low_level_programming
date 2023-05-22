#include <stdio.h>


/**
 *main - print all posible combination of numbers seprerated by comma and space
 *
 *Return: 0 (Success)
 */

int main(void)
{
	int comb = 0;

	while (comb <= 9)
	{
		putchar(comb + '0');
		if (comb < 9)
		{
		putchar(',');
		putchar(' ');
		}
		comb++;
	}
	putchar('\n');
	return (0);
}
