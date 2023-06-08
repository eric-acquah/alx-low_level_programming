#include "main.h"

/**
 *_print_rev_recursion - print strings in reverse
 *
 *@s: String pointer argument to be reversed
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	/*Base case; return if value is null*/
	if (*(s + i) == '\0')
		return;

	/*Recursive case; call function with next char as argument*/
	_print_rev_recursion(s + (i + 1));

	/*print after each recursive case to print in reverse*/
	_putchar(*(s + i));
}
