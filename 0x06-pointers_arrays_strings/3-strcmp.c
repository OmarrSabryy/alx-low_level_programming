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
		return (1);
	}
	else if (l_s1 < l_s2)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < l_s1; i++)
		{
			if (s1[i] > s2[i])
			{
				return (1);
			}
			if (s1[i] < s2[i])
			{
				return (-1);
			}
		}
		return (0);
	}
}
