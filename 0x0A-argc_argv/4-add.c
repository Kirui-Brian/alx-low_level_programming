#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */

int main(int argc, char **argv)
{
    int sum, i;
    int b;

    sum = 0;

    /* Check if  no arg was passed */
    for (i = 1; i < argc; i++)
    {
        /* Check if any char passed to arg is not a No. */
	for (b = 0; argv[i][b]; b++)
	{
		if (isdigit[i][b]) == 0)
		{
			printf("Error\n");
			return (1);
		}
	}
    }

    for (i = 1; i < argc; i++)
    {
	    sum += atoi(argv[i]);
    }
    if (argc == 1)
    {
	    printf("0\n");
    }
    else
    {
	    printf("%d\n", sum);
    }

    return (0);
}
