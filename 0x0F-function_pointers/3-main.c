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
	int num1, num2, result;
	char *operator;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	
	func = get_op_func(operator);
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = func(num1, num2);
	
	printf("%d\n", result);
	return (0);
}
