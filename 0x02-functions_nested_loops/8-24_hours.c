#include "main.h"
/**
 * jack_bauer - tic toc
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		if (!(h > 9))
		{
			_putchar('0');
		}
		_putchar(h + '0');
		_putchar(':');
		for (m = 0; m < 60; m++)
		{
			if (!(m > 9))
			{
				_putchar('0');
			}
			_putchar(m + '0');
			_putchar('\n');
		}
	}
}
