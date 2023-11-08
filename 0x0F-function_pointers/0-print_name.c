#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Print passed name.
 * @name: Passed named.
 * @f: Function pointer.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
