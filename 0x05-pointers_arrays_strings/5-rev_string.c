#include "main.h"

/**
 * rev_string -  function that reverses a string.
 *@s: is charachter as a  parameter
 * Return: always 0.
 */

void rev_string(char *s)
{

int n, i, j;
char T[100];
char *ptr;
ptr = T;

while (s[n] != '\0')
{
n++;
}
for (i = n - 1, j = 0; j < n; i--, j++)
{
ptr[j] = s[i];
}

}
