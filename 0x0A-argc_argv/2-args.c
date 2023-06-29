#include <stdio.h>

/**
 *main - print command line arguments to the console
 *@argc: number of arguments passed
 *@argv: pointer to arguments
 *Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
