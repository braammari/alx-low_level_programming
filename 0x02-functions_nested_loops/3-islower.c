#include "main.h"

/**
 * _islower - checks for lower case.
 * Return 1 if lower case, 0 otherwise.
 * @c:is the ASCII of letter
 **/

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
