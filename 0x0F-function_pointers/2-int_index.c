#include <stdlib.h>
#include "function_pointers.h"

/**
 *int_index - return the index of an integer in array if match is found
 *
 *@array: array to search through for match
 *@size: number of array elements
 *@cmp: function pointer to compare function
 *Return: (1) if size is 0; (-1) if no match is found;
 *index of match if succesful
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int indx, cmp_value;

	/*Handel exceptions*/
	if ((*cmp) == NULL || array == NULL)
		exit(1);

	else if (size <= 0)
		return (1);
	/**/
	else
	{
		for (indx = 0; indx < size; i++)
		{
			cmp_value = cmp(array[indx]);/*store return val of cmp*/

			if (cmp_value > 0)
				return (indx);/*if value is 1; return index*/
		}
	}

	return (-1);/*return this if no match was found*/
}
