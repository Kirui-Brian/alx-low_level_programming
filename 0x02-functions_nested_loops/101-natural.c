/*
 * File: 101-natural.c
 * Auth: Kirui Brian
 */

#include <stdio.h>
#include "main.h"

/**
 * main: A program that computes and prints the sum
 *	of all the multiples of 3 or 5 below 1024 (excluded),
 *	followed by a new line.
 * Return: nothing
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
