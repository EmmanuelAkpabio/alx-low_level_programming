#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the string
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	char arr[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char replace[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (s[i] == arr[j])
			{
				s[i] = replace[j];
				break;
			}
		}
	}

	return (s);
}
