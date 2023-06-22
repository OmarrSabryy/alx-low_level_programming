#include "main.h"
/**
 * print_diagonal - print a diagonal
 * @n: integer
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x = 0;

	if (n > 0)
	{
		while (x < n)
		{
			int i = 0;

			while (i < x)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
			x++;
		}
		_putchar('\n')
	}
	else
	{
		_putchar('\n');
	}
}
