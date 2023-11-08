#include "function_pointers.h"

/**
 * array_iterator - Iterate an array.
 * @array: Array passed.
 * @size: Size of array.
 * @action: Function passed.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || size < i || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
