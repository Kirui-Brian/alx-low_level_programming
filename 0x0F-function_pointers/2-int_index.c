#include "function_pointers.h"

/**
 * int_index - Returns index of first element where cmp != 0
 * @array: Array passed
 * @size: No. of elements in array
 * @cmp: Pointer to function used to compare values
 *
 * Return: Index of first element where cmp !=0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) == 1)
		{
			return (i);
		}
	}

	return (-1);
}
