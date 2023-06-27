#include <string.h>
#include "main.h"
/**
 * puts2 - print half the string
 * @str: pointer to a string
 *
 * Return: void
 */
void puts2(char *str)
{
	int l;
	int i;

	l = strlen(str);
	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
