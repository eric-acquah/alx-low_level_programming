#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocate memory sapce for an array
 *@nmemb: number of array elements
 *@size: size of each array element
 *Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *allo;
	char *init;

	if (nmemb == 0 || size == 0)/*check if arg values are zero*/
		return (NULL);

	allo = malloc(nmemb * size);/*allocate memory to the void pointer*/

	if (allo == NULL)/*check if malloc failed or not*/
		return (NULL);

	init = (char *)allo;/*typecast void pointer to enable dereferrancing*/

	for (i = 0; i < nmemb; i++)
		init[i] = 0;/*initialize memory blocks with zero*/

	return (allo); /*return void pointer*/
}
