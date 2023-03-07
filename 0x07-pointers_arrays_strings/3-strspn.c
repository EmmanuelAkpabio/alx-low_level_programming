#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the prefix substring
 *
 * Return: number of bytes in s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	char *copy;

	count = 0;
	copy = accept; /* make a copy of the string 'accept' */

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				break;
			}
			accept++;
		}
		if (*accept != '\0')
		{
			accept = copy; /* set address of accept to index 0 */
			s++;
		}
		else
		{
			return (count);
		}
	}

	return (count);
}
