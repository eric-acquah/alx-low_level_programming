#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *is_valid - loop through string argument to find for non-digit values
 *@dex: pointer to string argument
 *Return: (-1) if non-digit value is detected else return 0
 */
int is_valid(char *dex)
{
	int i;

	for (i = 0; dex[i] != '\0'; i++)
	{
		if (!(isdigit(dex[i])))
			return (-1);
	}
	return (0);
}

/**
 *main - print the sum of numbers received from the commandline
 *@argc: number of arguments from commandline
 *@argv: list of arguments
 *Return: 0 (Success) 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i, valid;
	int sum = 0;

	if (argc < 2)/*Make sure the arguments are more than one*/
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{/*pass each string to is_valid function be inspected for */
			valid = is_valid(argv[i]);

			if (valid == 0)
				sum += atoi(argv[i]);/*sum all number arguments*/
			else
			{/*print error if non-digit value is detected*/
				printf("Error\n");
				return (1);
			}
		}

		printf("%d\n", sum);/*print the value of sum*/
	}
	return (0);
}
