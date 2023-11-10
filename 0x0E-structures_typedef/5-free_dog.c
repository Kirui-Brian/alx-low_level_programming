#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog_t.
 * @d: Pointer to the dog_t to free.
 *
 * Description: This function frees the memory allocatedfor a dog_t,
 *	including the copied name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
