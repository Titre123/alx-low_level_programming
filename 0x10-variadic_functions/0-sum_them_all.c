#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of extra params
 * @...: the unnamed arguments
 *
 * Return: the sum of the unnamed arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int remaining = n;
	int sum = 0;

	va_start(args, n);
	while (remaining--)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
