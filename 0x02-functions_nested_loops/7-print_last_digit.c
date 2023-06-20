#include "main.h"
/**
 * print_last_digit - get the last digit
 * @x: integer
 *
 * Return: the last digit
 */
int print_last_digit(int x)
{
	int n = _abs(x) % 10;

	_putchar(n + '0');
	return (n);
}
