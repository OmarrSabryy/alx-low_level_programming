#include <stdio.h>
/**
 * print_array - prints array values
 * @a: array of integers
 * @n: length of the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (!(i == n - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
