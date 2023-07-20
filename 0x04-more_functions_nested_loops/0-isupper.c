#include "main.h"

/**
 * _isupper - checks for lower case.
 * Return: 1 if lower case, 0 otherwise.
 * @c: is the ASCII of letter
 **/

int _isupper(int c)
{
int val;
if (c >= 65 && c <= 90)
{
val = 1;
}
else
{
val = 0;
}
return (val);
}
