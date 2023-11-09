#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array of command line arguments
 * Return: 0 on success, other values on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *operator = argv[2];
	
	int (*func)(int, int) = get_op_func(operator);
	int result = func(num1, num2);
	
	printf("%d\n", result);
	return (0);
}
