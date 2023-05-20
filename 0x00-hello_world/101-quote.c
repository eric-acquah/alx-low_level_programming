#include <stdio.h>

/**
 *main - print string to standard error
 *
 *Return: 1 (Output to standard eror)
 */

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, \
2015-10-19\n";

	fwrite(quote, sizeof(char), sizeof(quote), stderr);
	return (1);
}
