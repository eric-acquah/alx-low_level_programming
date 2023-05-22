#include <stdio.h>

/**
 *main - print numbers using ascii values instead
 *
 *Return: 0 (Success)
 */

int main(void)
{
	int stat = 48;

	while (stat <= 57)
	{
		putchar(stat);
		stat++;
	}
	putchar('\n');
	return (0);
}
