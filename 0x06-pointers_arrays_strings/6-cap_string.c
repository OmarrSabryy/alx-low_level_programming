#include <string.h>
/**
 * cap_string - capitalize string
 * @s: pointer to string
 *
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char str[] = {' ', '"', '\t', ',', ';', '.', '!', '?', '(', ')', '{'
		, '}', '\n'};
	int l_str = strlen(str);
	int l = strlen(s);

	for (i = 0; i < l; i++)
	{
		if (s[i] > 97 && s[i] < 122)
		{
			if (i == 0)
			{
				int a = s[i] - 32;
				*(s + i) = a;
			}
			for (j = 0; j < l_str; j++)
			{
				if (s[i - 1] == s[j])
				{
					int a = s[i] - 32;
					*(s + i) = a;
				}
			}
		}
	}
	return (s);
}
