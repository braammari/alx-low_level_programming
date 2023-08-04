#include "main.h"

/**
 * _abs - computes the absolute value.
 * Return: absolute value of integer.
 * @n: is an integer
 **/

int _abs(int n)
{
int val;
if (n > 0)
{
val = n;
}
else if (n == 0)
{
val = 0;
}
else
{
val = -n;
}
return (val);
}
