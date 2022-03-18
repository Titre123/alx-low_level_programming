#include <stdio.h>

/**
 * main - prints nultplies of 3 or 5
 * Description: multiples between 0 and 100
 * Return: Always(0)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("\nFizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("\nFizz");
		}
		else if (i % 5 == 0)
		{
			printf("\nBuzz");
		}
		else
			printf("\n%d", i);
	}
	return (0);
}
