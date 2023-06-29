#include <string.h>
/**
 * _strcat - concat strings
 * @dest: pointer to string
 * @src: pointer to string
 *
 * Return: pointer to string
 */
char *_strcat(char *dest, char *src)
{
	int l_dest = strlen(dest);
	int l_src = strlen(src);
	int i;

	for (i = 0; i < l_src; i++)
	{
		*(dest + l_dest) = src[i];
		l_dest++;
	}
	return (dest);
}
