#include <stdio.h>
/**
 * main - prints fibonnaci numbers
 *
 * Description: prints from 1 to 98
 * Return: Always(0) Success
 */

int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%lu, ", i);
	while (count <= 98)
	{
		if (count == 98)
			printf("%lu\n", j);
		else
			printf("%lu, ", j);
		k = j;
		j += i;
		i = k;
		count++;
	}
	printf("\n");
	return (0);
}
