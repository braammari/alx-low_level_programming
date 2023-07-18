#include "main.h"
/**
 * _islower - check the code.
 *
 * Return: Always 0.
 */

/**
 * _islower - checks for lower case
 * return: 1 if lower case, 0 otherwise
 * @c: the ASCII of letter
 * **/

int _islower(int c)
{
int val;
if (c >= 97 && c <= 122)
{
val = 1;
}
else
{
val = 0;
}
return (val);
}
