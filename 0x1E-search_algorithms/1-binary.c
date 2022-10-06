#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * binary_search - search for a value in an array
 * using binary search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: the index of the found value,
 * or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (second_binary(array, value, 0, size - 1));
}

/**
 * help_binary - searches for a value in an array of
 * integers using recursion
 * @array: array to be searched
 * @value: value to be searched
 * @low: index of the low boundary
 * @high: index of the high boundary
 *
 * Return: the index of the found value,
 * or -1 if not found
 */
int second_binary(int *array, int value, size_t low, size_t high)
{
	size_t mid;

	array_print(array, low, high);
	if (high == low && array[low] != value)
		return (-1);

	mid = ((high - low) / 2) + lo;
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
		return (second_binary(array, value, mid + 1, high));
	if (array[mid] > value)
		return (second_binary(array, value, low, mid - 1));
	return (-1);
}

/**
 * array_print - prints an output
 * @array: array to print
 * @low: index of the low boundary
 * @high: index of the high boundary
 */
void print(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}
