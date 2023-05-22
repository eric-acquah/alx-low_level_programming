#include <stdio.h>

/**
 *main - print numbers
 *
 *Return: 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		/* (num + '0'); */
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
