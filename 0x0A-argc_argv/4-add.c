#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - print the sum of numbers received from the commandline
 *@argc: number of arguments from commandline
 *@argv: list of arguments
 *Return: 0 (Success) 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

	printf("%d\n", sum);
	}
	return (0);
}
