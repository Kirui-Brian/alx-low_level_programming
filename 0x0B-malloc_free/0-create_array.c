#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars and
 * 		 initializes it with a specific char.
 * @size: the size of the array to create.
 * @c: the character with which to initialize the array.
 *
 * Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
    if (size == 0)
    {
        return NULL;
    }

    char *array = (char *)malloc(size * sizeof(char));

    if (array != NULL)
    {
        for (unsigned int i = 0; i < size; i++)
        {
            array[i] = c;
        }
    }

    return array;
}
