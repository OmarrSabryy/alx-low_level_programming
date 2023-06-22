/**
 * _isdigit - check for digits
 * @c: integer
 *
 * Return: (1) success (0) otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
