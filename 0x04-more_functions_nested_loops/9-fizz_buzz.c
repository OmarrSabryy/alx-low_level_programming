#include <stdio.h>
/**
 * main - check multibles
 *
 * Return: (0) always success
 */
int main(void)
{
	int i = 0;

	while (i < 100)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (!(i == 99))
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
