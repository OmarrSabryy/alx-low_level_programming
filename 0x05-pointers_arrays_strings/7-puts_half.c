#include <string.h>
#include "main.h"
/**
 * puts_half - print the last half
 * @str: pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int l;
	int i;

	l = strlen(str);
	for (i = l % 2 == 0 ? l / 2 : (l / 2) + 1; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
