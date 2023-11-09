#include "3-calc.h"

/**
 * op_add - Addition.
 * @a: 1st No.
 * @b: 2nd No.
 *
 * Return: a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction.
 * @a: First No.
 * @b: Second No.
 *
 * Return: a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication.
 * @a: 1st No.
 * @b: 2nd No.
 *
 * Return: a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division.
 * @a: First No.
 * @b: Second No.
 *
 * Return: a / b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulus.
 * @a: First No.
 * @b: Second No.
 *
 * Return: a % b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	} 
	return (a % b);
}
