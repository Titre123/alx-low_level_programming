#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - check malloc
 * @b: arg
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
