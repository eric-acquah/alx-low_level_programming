#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - Create a 2d array in a newly assigned memory space
 *@width: Number of 2d array coloums
 *@height: Number of 2d array rows
 *Return: Pointer to the created 2d array; return NULL if malloc fails
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **arr;

	/*Allocate space for the row pointers of the 2d array*/
	arr = (int **)malloc(sizeof(int *) * height);
	/*Check if malloc did not fail*/
	if (arr == NULL)
		return (NULL);
	/*Now we allocate space for each coloum of the array*/
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		/*Check if memory has run out of space*/
		if (arr[i] == NULL)
		{
			/*If true, free all spaces previously allocated*/
			while (i > 0)
				free(arr[--i]);
		}
	}
	/*Initialize 2d array elements spaces with '0'*/
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			arr[j][k] = 0;
	}
	return (arr);
}
