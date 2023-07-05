/**
 * check_prime - check prime number
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */
int check_prime(int a, int b)
{
	if (b == 1)
	{
		return (1);
	}
	if (a % b == 0)
	{
		return (0);
	}
	b--;
	check_prime(a, b);
}
/**
 * is_prime_number - check for prime
 * @n: integer
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n > 1)
	{
		return (check_prime(n, n - 1));
	}
	return (0);
}
