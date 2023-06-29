#include <string.h>
/**
 * _strncpy - copy string
 * @dest: pointer to string
 * @src: pointer to string
 * @n: integer
 *
 * Return: pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l_src = strlen(src);
	int i;

	if (n <= l_src)
	{
		for (i = 0; i < n; i++)
		{
			*(dest + i) = src[i];
		}
	}
	else
	{
		for (i = 0; i < l_src; i++)
		{
			*(dest + i) = src[i];
		}
		for (i = l_src; i < n; i++)
		{
			*(dest + i) = '\0';
		}
	}
	return (dest);
}
