#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiple two numbers passed from the command line
 *@argc: number of arguments passed
 *@argv: pointer to argument list
 *Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
