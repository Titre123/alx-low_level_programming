#include <stdio.h>
#include "main.h"

/**
 * print_array - update
 * @a: value
 * @n: value
 * Return:not
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
	}
	printf("\n");
}
