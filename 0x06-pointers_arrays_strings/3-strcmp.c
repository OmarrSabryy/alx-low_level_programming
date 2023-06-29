#include <string.h>
/**
 * _strcmp - compare two stings
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Return: 0 s1 == s1 1 s1 > s2 -1 s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int l_s1 = strlen(s1);
	int l_s2 = strlen(s2);
	int i;

	if (l_s1 > l_s2)
	{
		return (15);
	}
	else if (l_s1 < l_s2)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
