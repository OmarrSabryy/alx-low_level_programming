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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = i * j;
			if (i > 1 &&  m > 0 && m >= 10)
			{
				_putchar((i - 1) + '0');
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar(m + '0');
				_putchar(' ');
			}
			if (!(j == 9))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
