#include "main.h"

/**
 *main - print string to stdio
 *
 *Return: 0 (Success)
 */

int main(void)
{
	char print[] = "_putchar";
	int i;

	for (i = 0; print[i] != '\0'; i++)
	{
		_putchar(print[i]);
	}
	_putchar('\n');

	return (0);
}
