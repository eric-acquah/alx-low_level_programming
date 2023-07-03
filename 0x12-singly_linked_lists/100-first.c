#include <stdio.h>

/**
 *preprocess - print before main executes
 *
 */

void __attribute__((constructor)) preprocess()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
