#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * Return: total sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int sum;
	va_start(args, n);

	for (i = 0; sum = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);

	return (sum);
}

