#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenate all arguments of your program with new line.
 * @ac: Argument count.
 * @av: Double pointer to array of strings passed to main.
 *
 * Return: Null if fail, else return pointer to new string.
 */

char *argstostr(int ac, char **av)
{
	char *p, *pen;
	int i, j, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, total = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, total++)
			;
		total++;
	}
	total++;

	p = malloc(total * sizeof(char));
	if (p == NULL)
		return (NULL);

	pen = p;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*p = av[i][j];
			p++;
		}
		*p = '\n';
		p++;
	}

	return (pen);
}
