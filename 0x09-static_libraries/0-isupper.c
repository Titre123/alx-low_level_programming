#include "main.h"

/**
 * _isupper - checks uppercase character
 * @c: integer
 * Return: 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
