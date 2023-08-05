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
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
return (0);
}
