#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *check_endian = (char *)&x;

	return (*check_endian);
}
