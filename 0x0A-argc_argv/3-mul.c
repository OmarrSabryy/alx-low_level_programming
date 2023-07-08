#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: integer
 * @argv: array of strings
 *
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
