/**
 * swap_int - swap values
 * @a: pointer to integer
 * @b: pointer to integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	int m = *b;

	*a = m;
	*b = n;
}
