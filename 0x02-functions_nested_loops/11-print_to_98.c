#include <stdio.h>

/**
*print_to_98 - a function that prints all natural numbers from n to 98
*user input's number prints to 98, regardless < 98 or > 98
*@n: number input
*Return: Always 0 (Success)
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n; i <= 97; i++)
			printf("%d, ", i);
	}
	else if (n > 98)
	{
		int i;

		for (i = n; i >= 99; i--)
			printf("%d, ", i);
	}
	printf("98\n");
}
