#include "main.h"
#include <stdlib.h>

/**
 * array_range - Range to create array of integers.
 * @min: Min range for array.
 * @max: Max range for array
 *
 * Return: Pointer to array.
 */
int *array_range(int min, int max)
{
	int *p, i, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;
	p = malloc(sizeof(int) * (max - min + 1));
	
	if (p == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		p[i] = min++;

	return (p);
}
