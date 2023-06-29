#include <string.h>
/**
 * reverse_array - reverse array elements
 * @a: array of integers
 * @n: integer
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int x = a[i];
		int y = a[n - (i + 1)];

		*(a + i) = y;
		*(a + (n - (i + 1))) = x;
	}
}
