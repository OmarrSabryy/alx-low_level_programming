#include "main.h"
/**
 * print_line - print lines
 * @n: integer
 *
 * Return: void
 */
void print_line(int n)
{
	int x = 0;

	if (n > 0)
	{
		while (x < n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
