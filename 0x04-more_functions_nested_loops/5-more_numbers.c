#include "main.h"
/**
 * more_numbers - print numbers
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar((i <= 9 ? i : (i / 10)) + '0');
			if (i > 9)
			{
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
