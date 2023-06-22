/**
 * _isupper - check uppercase
 *
 * Return: (1) success (0) otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
