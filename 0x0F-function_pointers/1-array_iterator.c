#include <stddef.h>
#include "function_pointers.h"

/**
 *array_iterator - execute (call-back) a funtion for each array element
 *@array: array to work with
 *@size: size of given array
 *@action: funtion pointer argument
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		exit(1);

	for (i = 0; i < size; i++)
		action(array[i]);
}
