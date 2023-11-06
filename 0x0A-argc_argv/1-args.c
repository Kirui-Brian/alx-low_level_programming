#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	// Print the number of arguments (excluding the program name)
	if(*argv)
	{
		printf("%d\n", argc - 1);
	}
	
	return 0;
}
