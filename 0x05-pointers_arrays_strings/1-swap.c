#include "main.h"

/**
 *swap_int - swap values of variables
 *@a: first argument pointer
 *@b: second argument pointer
 */

void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;
	*a = *b;
	*b = holder;
}
