#include <string.h>
#include "main.h"
/**
 * print_rev - prints string
 * @s: pointer to string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l;
	int i;

	l = strlen(s);
	for (i = (l - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
