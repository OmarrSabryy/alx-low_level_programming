#include <ctype.h>
/**
 * _islower - check lowercase
 *@c: integer
 * Return: (1) success else (0)
 */
int _islower(int c)
{
	int r;

	r = islower(c);
	if (r > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
