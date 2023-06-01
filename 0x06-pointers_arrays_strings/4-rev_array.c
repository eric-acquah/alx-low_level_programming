#include "main.h"

/**
 *reverse_array - reverse the contents of arrays
 *@a: Array to be reversed
 *@n: Number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i;
	int holder;

	for (i = 0; i < n; i++)
	{
		holder = a[i];
		a[i] = a[n - 1];
		a[n - 1] = holder;
		n--;
	}
}
