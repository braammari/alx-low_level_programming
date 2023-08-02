#include "main.h"

/**
 * factorial - print string
 * @n: is an array
 * Return: i
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
return (n * factorial(n - 1));
}
