#include <stdio.h>
/**
 * main - prints fibonnaci numbers
 *
 * Description: prints from 1 to 98
 * Return: Always(0) Success
 */

int main(void)
{
    int n = 2;
    int add;
    
    int a = 1;
    int b = 2;
    printf("%d, ",a);
    
    while (n < 98){
        printf("%d, ",b);
	add = a + b;
        a = b;
        b = add;
        n++;
    }

	  printf("\n");

	  return (0);
}
