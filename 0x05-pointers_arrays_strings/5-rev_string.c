#include <string.h>
/**
 * rev_string - reverse string
 * @s: pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l;

	l = srtlen(s);
	for (i = 0; i < (l / 2); i++)
	{
		int a = s[i];
		int b = s[l - (i + 1)];
		*(s + i) = b;
		*(s + (l - (i + 1))) = a;
	}
}
