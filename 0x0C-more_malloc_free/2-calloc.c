#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array.
 * @nmemb: No. of elements.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	
	if (p == NULL)
		return (NULL);
	b = p;
	for (i = 0; i < (nmemb * size); i++)
		b[i] = '\0';

	return (b);
}
