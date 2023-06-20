/**
 * _abs - get absolute value
 *@c: integer
 * Return: the avsolute value
 */
int _abs(int x)
{
	int n;

	if (x < 0)
	{
		n = (0 - x);
		return (n);
	}
	else
	{
		return (x);
	}
}
