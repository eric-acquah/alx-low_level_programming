#include "search_algos.h"

/**
 *linear_search - search for a value in an array using linear search algorithm
 *@array: pointer to array to be searched
 *@size: size of array
 *@value: value to search
 *Return: index of value found, else return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
