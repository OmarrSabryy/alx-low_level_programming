#include "main.h"
/**
 * print_triangle - print triangle
 * @size: integer
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i = 1;

		while (i <= size)
		{
			int a = 1;
			int b = 1;

			while (a <= (size - i))
			{
				_putchar(' ');
				a++;
			}
			while (b <= i)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
