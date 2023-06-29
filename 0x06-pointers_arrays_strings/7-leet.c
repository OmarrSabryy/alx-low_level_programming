#include <string>
/**
 * leet - muzart code
 * @s: pointer to string
 *
 * Return: pointer to string
 */
char *leet(char *s)
{
	int i;
	int j;
	int l = strlen(s);
	char m[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char le[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; i < l; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == m[j] || s[i] == m[j + 5])
			{
				*(s + i) = le[j];
			}
		}
	}
	return (s);
}
