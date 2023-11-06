#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: No. of args
 * @argv:Aarguments
 * Return: Success(0), else(1)
 *
 */
int main(int argc, char **argv)
{
	int cents, count, total;

	count = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
	}
	else if (argc == 2)
	{
		cents = atoi(*(argv + 1));
		total = _check_coins(cents, count);
		printf("%d\n", total);
	}

	return (0);
}

/**
 * _check_coins - Check coins needed
 * @cents: Cents remaining
 * @count: Minimal number of coins
 *
 * Return: Coins number needed
 *
 */
int _check_coins(int cents, int count)
{
		while (cents != 0)
		{
			if (cents >= 25)
			{
				count += cents / 25;
				cents = cents % 25;
			}
			else if (cents >= 10)
			{
				count += cents / 10;
				cents = cents % 10;
			}
			else if (cents >= 5)
			{
				count += cents / 5;
				cents = cents % 5;
			}
			else if (cents >= 2)
			{
				count += cents / 2;
				cents = cents % 2;
			}
			else if (cents >= 1)
			{
				count += cents / 1;
				cents = cents % 1;
			}
		}
		return (count);
}
