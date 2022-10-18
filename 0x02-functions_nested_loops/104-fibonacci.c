#include <stdio.h>
#define LARGEST 10000000000

/**
 * a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * The numbers should be separated by comma, followed by a space ,
 * You are allowed to use the standard library
 * You are not allowed to use any other library (You can’t use GMP etc...)
 * You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
 * You are not allowed to hard code any Fibonacci number (except for 1 and 2)
 */
int main(void)
{
	unsigned long int fr1 = 0, bk1 = 1, fr2 = 0, bk2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", bk1, bk2);
	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > LARGEST || fr2 > 0 || fr1 > 0)
		{
			hold1 = (bk1 + bk2) / LARGEST;
			hold2 = (bk1 + bk2) % LARGEST;
			hold3 = fr1 + fr2 + hold1;
			fr1 = fr2, fr2 = hold3;
			bk1 = bk2, bk2 = hold2;
			printf("%lu%010lu", fr2, bk2);
		}
		else
		{
			hold2 = bk1 + bk2;
			bk1 = bk2, bk2 = hold2;
			printf("%lu", bk2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");

	return (0);
}

