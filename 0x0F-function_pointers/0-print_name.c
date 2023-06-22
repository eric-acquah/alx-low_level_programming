#include "function_pointers.h"

/**
 *print_name - call-back a funtion to print any name
 *pointered to by the string pointer
 *
 *@name: string pointer argument
 *@f: function pointer argument to the callback function
 */

void print_name(char *name, void (*f)(char *))
{
	/*Don't call-back if function pointer points to NULL*/
	if (f != NULL)
	{
		(*f)(name); /*else pass str as argument to function call back*/
	}
}
