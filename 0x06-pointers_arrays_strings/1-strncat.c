#include <string.h>
/**
 * _strncat - concat strings
 * @dest: pointer to string
 * @src: pointer to string
 * @n: integer
 *
 * Return: pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
	int l_dest = strlen(dest);
	int l_src = strlen(src);
	int i;

	for (i = 0; i < (n < l_src ? n : l_src); i++)
	{
		*(dest + (l_dest + i)) = src[i];
	}
	return (dest);
}
