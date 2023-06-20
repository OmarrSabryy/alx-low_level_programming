#include <ctype.h>
/**
 * _isalpha - check alphabet
 *@c: integer
 * Return: (1) success else (0)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
