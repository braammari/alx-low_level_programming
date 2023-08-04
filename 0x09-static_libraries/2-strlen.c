#include "main.h"

/**
 * _strlen - gives the lenght of a string
 *@s: is charachter as a  parameter
 * Return: a interger value.
 */

int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
