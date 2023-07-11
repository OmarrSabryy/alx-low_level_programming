#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print sum of numbers
 * @argc: integer
 * @argv: array of strings
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{       
        int i;
        int result;
        
        if (argc < 3)
        {       
                printf("0\n");
		return (0);
        }
	for (i = 1; i < argc; i++)
	{
		
		if(isdigit(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
