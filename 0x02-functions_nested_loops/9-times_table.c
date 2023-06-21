#include "main.h"
/**
 * times_table - get time table
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int m;
	int d;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = i * j;
			if (i > 1 &&  m > 0 && m >= 10)
			{
				d = m / 10;
				_putchar((d) + '0');
				_putchar((m % 10) + '0');
				if (!(j == 9))
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (j > 0)
				{
					_putchar(' ');
				}
				_putchar(m + '0');
				if (!(j == 9))
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
