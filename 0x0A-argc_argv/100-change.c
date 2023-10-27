#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */

int main(int argc, char *argv[])
{
    // Check the number of arguments
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    // Convert the input argument to an integer
    int cents = atoi(argv[1]);

    // Check if the input is negative
    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    // Define the coin values
    int coin_values[] = {25, 10, 5, 2, 1};

    // Initialize variables to count the number of coins and the remaining cents
    int num_coins = 0;
    int remaining_cents = cents;

    // Use a greedy algorithm to find the minimum number of coins
    for (int i = 0; i < 5; i++)
    {
        num_coins += remaining_cents / coin_values[i];
        remaining_cents = remaining_cents % coin_values[i];
    }

    // Print the minimum number of coins
    printf("%d\n", num_coins);

    return 0;
}
