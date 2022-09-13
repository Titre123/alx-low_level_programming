#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */

void times_table(void){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            _putchar(i * j);
	    _putchar(',');
	    _putchar(' ')
        }
        _putchar('\n');
    }
}
