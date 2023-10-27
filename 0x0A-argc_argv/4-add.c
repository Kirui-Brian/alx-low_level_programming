#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */

int main(int argc, char *argv[])
{
    int sum = 0;

    // Check if no numbers are provided
    if (argc == 1)
    {
        printf("0\n");
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        // Convert the argument to an integer
        char *endptr;
        int num = strtol(argv[i], &endptr, 10);

        // Check for conversion errors
        if (*endptr != '\0' || num < 0)
       	{
            printf("Error\n");
            return 1;
        }

        sum += num;
    }

    printf("%d\n", sum);

    return 0;
}
