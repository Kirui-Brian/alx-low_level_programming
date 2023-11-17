#include <stdio.h>
#include "lists.h"
/**
 * premain - Function that prints a message before the main function is executed.
 */
void __attribute__ ((constructor)) premain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
