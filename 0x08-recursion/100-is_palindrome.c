#include "main.h"
#include "helper_functions.h"

/**
 *is_palindrome - retuen 1 if passed string is a palindrome
 *@str: string to work on
 *Return: 1 if string is palindrome, 0 if not
 */
int is_palindrome(char *str)
{
	int state;/*this will tell us whether str is palindome or not*/
	char clone[50];/*to store a copy of str*/

	_strcpy(clone, str);/*store a copy of the string*/

	rev_string(clone);/*then reverse the string*/

	/*here we compare the string, if there is a match it will return 0*/
	/*and we store that in 'state'*/
	state = _strcmp(clone, str);

	if (state == 0)
		return (1);/*means string is palindrome*/

	return (0);
}
