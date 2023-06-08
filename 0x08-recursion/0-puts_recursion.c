#include "main.h"

/**
 *_puts_recursion - Print string using the recursive method
 *@s: String pointer argument
 */

void _puts_recursion(char *s)
{
	int i = 0;

	/*Base condition; print newline & return function if character is null*/
	if (*(s + i) == '\0')
	{
		_putchar('\n');
		return;
	}

	/*Else we print the character*/
	_putchar(*(s + i));

	/*Then we call the function again with next char in string as arg */
	_puts_recursion(s + (i + 1));
}
