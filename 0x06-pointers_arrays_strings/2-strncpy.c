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

	for (i = 0; i < (n < l_src ? n : l_src); i++)
	{
		*(dest + i) = s[i];
	}
	return (dest);
}
