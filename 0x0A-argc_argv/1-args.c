#include <stdio.h>

/**
 *main - print the number of arguments passed
 *@argc: number of arguments passed to the program
 *@argv: pointer to arguments
 *Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)*argv;

	if (argc > 1)
	{
		printf("%d\n", (argc - 1));
	}
	else
		printf("%d\n", 0);
	return (0);
}
