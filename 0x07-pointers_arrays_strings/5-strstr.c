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
	int cmp;
	int j;
	char *copy;

	copy = needle;
	i = 0;

	while (*haystack != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = i;
			while (*needle != '\0')
			{
				if (haystack[j] == *needle)
				{
					cmp = 1;
				}
				else
				{
					cmp = 0;
					break;
				}
				needle++;
				j++;
			}
			if (*needle == '\0' && cmp == 1)
			{
				return (haystack + i);
			}
		}
		needle = copy;
		i++;
	}

	return ('\0');
}
