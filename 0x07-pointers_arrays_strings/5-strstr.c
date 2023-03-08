#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the larger string
 * @needle: the substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *copy;

	copy = needle;
	i = 0;

	if (needle[0] == '\0')
		return ('\0');

	while (*haystack != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = i;
			while (*needle != '\0')
			{
				if (haystack[j] == *needle)
				{
					j++;
					needle++;
				}
				else
					break;
			}
			if (*needle == '\0')
			{
				return (haystack + i);
			}
		}
		needle = copy;
		i++;
	}

	return ('\0');
}
