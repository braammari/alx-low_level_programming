#include "main.h"
/**
 * *_strstr - copy a string
 * @haystack: is an array
 * @needle: is character
 * Return: s or O
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k = 0;

	if (*needle == '\0')
	{
		return (&haystack[i]);
	}
while (needle[k] != '\0')
{
	k++;
}
while (haystack[i] != '\0')
{
	if (haystack[i] == needle[0])
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
			{
				break;
			}
		}
		if (j == k)
		{
			return (&haystack[i]);
		}
	}
	i++;
}
return (0);
}
