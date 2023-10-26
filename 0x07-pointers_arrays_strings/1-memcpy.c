#include "main.h"

/**
 * _memcpy - Copies n bytes from mem area src to mem area dest
 * @dest: Memory to copy to.
 * @src: Source to copy from.
 * @n: Bytes from memory area.
 *
 * Return: A pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for  (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
