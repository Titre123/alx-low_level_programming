#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_strings - print a string followed by a newline
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 * @...: the strings to print
 *
 * Description: This function prints strings, separated by separator,followed
 * by a new line. If separator is NULL, it's treated as the empty string.If a
 * string is NULL, print "(nil)" instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int remaining = n;
	const char *str = NULL;

	va_start(args, n);
	if (!separator)
		separator = "";
	while (remaining--)
	{
		str = va_arg(args, const char *);
		printf("%s", str ? str : "(nil)");
		if (remaining)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
