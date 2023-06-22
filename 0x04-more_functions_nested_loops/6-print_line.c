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
			putchar('_');
			x++;
		}
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
