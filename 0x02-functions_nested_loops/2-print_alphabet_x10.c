#include "main.h"
/**
 * print_alphabet_x10 - type alphabet (10) times
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		_putchar('\n');
		i++;
	}
}
