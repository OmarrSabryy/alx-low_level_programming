/**
 * _pow_recursion - get power of integer
 * @x: integer
 * @y: integer
 *
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
