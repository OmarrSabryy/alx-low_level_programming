#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		if (c == 'z')
		{
			for (C = 'A'; C <= 'Z'; C++)
			{
				putchar(C);
				if (C == 'Z')
				{
					putchar('\n');
				}
			}
		}
	}
	return (0);
}
