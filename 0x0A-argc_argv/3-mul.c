#include <stdio.h>
#include<stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * @argc: is integer count
 * @argv: is an array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, p = 1;

	if (argc == 1)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			p = p * atoi(argv[i]);
		}

	printf("%d\n", p);
	}
return (0);
}
