#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string
 *
 * Return: pointer to the encoded string
 */

char *leet(char *str)
{
	int i;
	char *copy;

	copy = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
			str[i] = '3';
		else if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			str[i] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';
		else
			str[i] = str[i];
	}

	return (copy);
}
