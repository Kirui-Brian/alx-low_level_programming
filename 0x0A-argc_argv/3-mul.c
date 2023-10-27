#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */

int main(int argc, char *argv[])
{
    // Check if the program was not given exactly two arguments
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    // Convert the two input arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Multiply the two numbers and print the result
    int result = num1 * num2;
    printf("%d\n", result);

    return (0);
}
