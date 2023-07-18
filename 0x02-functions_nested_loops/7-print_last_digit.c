#include "main.h"

/**
 * print_last_digit - last digit of number.
 * Return: last digit of number.
 * @n: is an integer
 **/

int print_last_digit(int n)
{
if (n > 0)
{
n = n % 10;
_putchar(n + '0');
}
else
{
n = n % 10;
n = -1 * n;
_putchar(n + '0');
}
return (n);
}
