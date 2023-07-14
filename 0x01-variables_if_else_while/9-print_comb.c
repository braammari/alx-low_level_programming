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

	for (i = 0; i < 10; i++)
	{
		if (i <= 8)
		{
			putchar(i + '0');
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(i + '0');
		}
	}
	return (0);
}
