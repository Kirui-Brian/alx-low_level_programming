#include "3-calc.h"

/**
 * get_op_func - Get operator and call specific function.
 * @s: Operator passed as argument.
 *
 * Return: Result.
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[1].op != NULL && ops[1].op != s)
	{
		i++;
	}
	return (ops[i].f(a, b));
}
