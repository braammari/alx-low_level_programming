#include "main.h"

/**
 * _isdigit - checks for lower case.
 * Return: 1 if digit, 0 otherwise.
 * @c: is the ASCII of letter
 **/

int _isdigit(int c)
{
int val;
if (c >= 48 && c <= 57)
{
val = 1;
}
else
{
val = 0;
}
return (val);
}
