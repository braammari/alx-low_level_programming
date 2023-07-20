#include "main.h"
/**
 * positive_or_negative - checks if integer is positive or negative.
 * Return: Always 0 (Success)
 *@n: is an integer
*/

void positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
