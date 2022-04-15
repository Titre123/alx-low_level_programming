#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *  struct print_fn - a format spec associated with a print function
 *  @format: the format specifier
 *  @fn: the print function
 *  Description:
 */

typedef struct print_fn
{
	char format;
	int (*fn)(va_list);
} print_fn_t;

int sum_them_all(const unsigned int n, ...)
void print_numbers(const char *separator, const unsigned int n, ...)
void print_strings(const char *separator, const unsigned int n, ...)
void print_all(const char * const format, ...)
void _printchar(va_list args);
void _printstr(va_list args);
void _printfloat(va_list args);
void _printint(va_list args);


#endif
