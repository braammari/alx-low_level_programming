#include "main.h"

/**
 * times_table - multiplication of line by colone.
 * Return: Always 0.
 **/

void times_table(void)
{
int i, j, d, u;

for (i = 0; i < 10; i++)
{

for (j = 0; j < 10; j++)
{

if (i * j < 10 && j != 0)
{
_putchar(32);
}
if (i * j < 10)
{
_putchar(i * j + '0');
}
else
{
d = (i * j) / 10;
u = (i * j) % 10;
_putchar(d + '0');
_putchar(u + '0');
}
if (j < 9)
{
_putchar(44);
_putchar(32);
}
}
_putchar('\n');
}
}

