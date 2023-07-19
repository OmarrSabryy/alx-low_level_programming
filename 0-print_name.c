/**
 * print_name - print name
 * @name: name
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		f(name);
	}
}
