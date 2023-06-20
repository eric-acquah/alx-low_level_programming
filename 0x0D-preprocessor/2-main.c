#include <unistd.h>
#include "main.h"

#define PRINT_OUT __FILE__

/**
 *main - print source code file name
 *
 *Return: 0 (Success)
 */

int main(void)
{
	int i;
	char s[] = PRINT_OUT;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');

	return (0);
}
