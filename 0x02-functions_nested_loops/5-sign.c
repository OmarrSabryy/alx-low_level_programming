#include "main.h"
/**
 * print_sign - print the sign
 * @n: integer
 *
 * Return: (1) positive (-1) negative (0) zero
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
