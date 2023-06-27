#include <string.h>
#include "main.h"
/**
 * _puts - prints string
 * @str: pointer to string
 *
 * Return: void
 */
void _puts(char *str)
{
	int l;
	int i;

	l = strlen(str);
	for (i = 0; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
