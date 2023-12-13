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
	int mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;

		print_array(array, left, right);

		if (array[mid] == value)
			return (mid);

		if (value > array[mid])
			left = mid + 1;

		else if (value < array[mid])
			right = mid - 1;
	}

	return (-1);
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
