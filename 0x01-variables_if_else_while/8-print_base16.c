#include <stdio.h>
#include<stdlib.h>
#include <time.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c = 'a';

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
