#include "search_algos.h"

/**
 *binary_search - search for value in an array using binary search algorithm
 *@array: array to be searched
 *@size: size of given array
 *@value: value to be searched for
 *Return: index of found value,else return -1
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;

	if (array == NULL)
		return (-1);

	return (search(array, left, right, value));
}

/**
 *search - Recursively search for value in array
 *@arr: pointer to array to search
 *@left: start of array
 *@right: end of array
 *@value: value to be located
 *Return: index of found value, else -1
 */

int search(int *arr, int left, int right, int value)
{
	int mid = (left + right) / 2;

	/*Base case*/
	if (left > right)
		return (-1);

	print_array(arr, left, right);

	if (arr[mid] == value)
		return (mid);

	else if (value > arr[mid])
	{
		left = mid + 1;
		search(arr, left, right, value);
	}
	else if (value < arr[mid])
	{
		right = mid - 1;
		search(arr, left, right, value);
	}
}

/**
 *print_array - Print the current state of the array
 *@arr: pointer array to array to print
 *@left: start of array
 *@right: end of array
 */

void print_array(int *arr, int left, int right)
{
	printf("Searching in array: ");

	while (left <= right)
	{
		if (left < right)
			printf("%d, ", arr[left]);
		else
			printf("%d", arr[left]);
		left++;
	}
	printf("\n");
}
