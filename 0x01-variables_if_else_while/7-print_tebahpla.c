#include <stdio.h>

/**
 *main - print alphabets in reverse
 *
 *Return: 0 (Success)
 */

int main(void)
{
	char hpla = 'z';

	while (hpla >= 'a')
	{
		putchar(hpla);
		hpla--;
	}
	putchar('\n');
	return (0);
}
