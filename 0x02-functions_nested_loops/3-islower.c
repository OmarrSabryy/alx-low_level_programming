#include <ctype.h>
#include "main.h"
/**
 * _islower - check lowercase
 *
 * return: (1) success else  (0)
 */
int _islower(int c)
{
	int r;

	r = islower(c);
	if (r == 1)
	{
		return (r);
	}
	else
	{
		return (0);
	}
}
