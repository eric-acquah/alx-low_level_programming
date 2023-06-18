#include "main.h"
#include <stdlib.h>

/**
 *array_range - craete an array of integers in a given range
 *@min: minimum range value
 *@max: maximum range value
 *Return: pointer to array
 */

int *array_range(int min, int max)
{
	int i;
	int *range;
	int elem;

	/*if the min is more than max; error*/
	if (min > max)
		return (NULL);

	elem = (max - min) + 1; /*formula to get the elements within a range*/

	 /*allocate the right memory space for the array*/
	range = (int *)malloc(sizeof(int) * elem);

	if (range == NULL)
		return (NULL); /*check if malloc failed; if true return null*/

	for (i = 0; i < elem; i++)
		range[i] = min + i;/*increase value of min till it raches max*/

	return (range);
}
