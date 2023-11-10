#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Print the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the matrix.
 *
 * Description: This function prints the sum of two diagonals of a square
 *	matrix of integers.
 */
void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	s1 = 0;
	s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += *(a + i * size + i);
		s2 += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", s1, s2);
}
