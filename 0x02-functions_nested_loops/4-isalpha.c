#include "main.h"

/**
 * _isalpha - checks for lower case.
 * Return: 1 if lower case, 0 otherwise.
 * @c: is the ASCII of letter
 **/

int _isalpha(int c)
{
int val;
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
val = 1;
}
else
{
val = 0;
}
return (val);
}
