#include <string.h>
/**
 * _strcpy - copy string from destination to another
 * @dest: pointer to array string
 * @src: pointer to array string
 *
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int l;

	l = strlen(src);
	for (i = 0; i < l; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
