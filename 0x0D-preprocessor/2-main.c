#include <stdio.h>
#ifndef MAIN_H
#define MAIN_H

#define NAME __FILE__

#endif

/**
 * main - prints the name of the file it was compiled from,
 *	followed by a new line.
 *
 * Return: Success(0).
 */
int main(void)
{
	printf("%s\n", NAME);

	return (0);
}
