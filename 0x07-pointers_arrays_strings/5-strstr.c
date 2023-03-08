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
	int i, j, k;

	i = 0;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		/* if a byte matches firt char of needle */
		/* iterate through needle until mismatch */
		if (haystack[i] == needle[0])
		{
			j = 0, k = i;
			while (needle[j] != '\0')
			{
				if (haystack[k] == needle[j])
					j++, k++;
				else
					break;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}

	return ('\0');
}
