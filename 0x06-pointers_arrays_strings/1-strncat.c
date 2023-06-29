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
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + l_dest) = src[i];
		l_dest++;
	}
	return (dest);
}
