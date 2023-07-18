#include "main.h"

/**
 * print_sign - checks for lower case.
 * Return: 1 if n greater than 0, 0 if nequal 0, -1 if n negative
 * @n: is qn integer
 **/

int print_sign(int n)
{
int val;
if (n > 0)
{
val = 1;
_putchar(43);
}
else if (n == 0)
{
val = 0;
_putchar(48);
}
else
{
val = -1;
_putchar(45);
}
return (val);
}
