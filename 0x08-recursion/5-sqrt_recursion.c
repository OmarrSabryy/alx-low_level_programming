/**
 * check_power - check power
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */
int check_power(int a, int b)
{
	if (b == a)
	{
		return (-1);
	}
	if (a / b == b)
	{
		if (a % b == 0)
		{
			return (b);
		}
		return (-1);
	}
	return (check_power(a, b - 1));
}
/**
 * _sqrt_recursion - get sqrt
 * @n: integer
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (check_power(n, 1));
}
