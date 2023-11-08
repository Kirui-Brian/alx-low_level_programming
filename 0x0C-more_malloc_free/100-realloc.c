#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to previously allocated memory.
 * @old_size: Size in bytes of memory allocated by @ptr.
 * @new_size: new size of new memory block.
 *
 * Return: Pointer to reallocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int index;
	char *copy, *new;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	copy = ptr;
	p = malloc(sizeof(copy) * new_size);

	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	new = p;
	for (index = 0; index < old_size && index < new_size; index++)
		new[index] = *copy++;
	free(ptr);
	return (p);
}
