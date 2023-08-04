#include "main.h"
/**
 *_strspn - copy a string
 * @s: is an array
 * @accept: is character
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
		{
			break;
		}
		i++;
	}
return (i);
}
