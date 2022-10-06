#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - searches for the first value an element occurs
 * using the linear search algorithm
 * @array: array to search element
 * @size: size of the array
 * @value: value to search
 *
 * Return: the index of the found value,
 * or -1 if the value is not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
