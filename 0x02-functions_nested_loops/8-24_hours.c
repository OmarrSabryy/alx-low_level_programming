#include "main.h"
/**
 * jack_bauer - tic toc
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;

	for (h1 = 0; h1 < 3; h1++)
	{
		for (h2 = 0; h2 < 10; h2++)
		{
			if (!(h1 == 2 && h2 == 4))
			{
				for (m1 = 0; m1 < 6; m1++)
				{
					for (m2 = 0; m2 < 10; m2++)
					{
						_putchar(h1 + '0');
						_putchar(h2 + '0');
						_putchar(m1 + '0');
						_putchar(m2 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
