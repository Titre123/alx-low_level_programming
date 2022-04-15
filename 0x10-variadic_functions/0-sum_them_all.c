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
<<<<<<< HEAD
	unsigned int remaining = n;
	int sum = 0;

	va_start(args, n);
	while (remaining--)
		sum += va_arg(args, int);
=======
	int sum;
	va_start(args, n);

	for (i = 0; sum = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
>>>>>>> 5be3b4abce12f36aacdd4941b338e5077a55d99e
	va_end(args);

	return (sum);
}
