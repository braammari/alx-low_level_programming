#include "main.h"

/**
 * rev_string -  function that reverses a string.
 *@s: is charachter as a  parameter
 * Return: always 0.
 */

void rev_string(char *s)
{

int n = 0, i, j;
while (s[n] != '\0')
{
n++;
}
for (i = n - 1, j = 0; j < i; i--, j++)
{
char temp;
temp = s[j];
s[j] = s[i];
s[i] = temp;
}
}
