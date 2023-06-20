#include "main.h"
#include <limits.h>
/**
 * print_last_digit - get the last digit
 * @x: integer
 *
 * Return: the last digit
 */
int print_last_digit(int x)
{
	int n;

	if (x < 0)
	{
		n = (x * -1) % 10;
	}
	else
	{
		n = x % 10;
	}
	_putchar(n + '0');
	return (n);
}
