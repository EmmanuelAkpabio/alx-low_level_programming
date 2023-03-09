#include "main.h"

char *point_to_last(char *s);
int compare(char *left, char *right);

/**
 * is_palindrome - checks if a string is palindrome or not
 * @s: the string
 *
 * Return: 1, if s is palindrome, otherwise, 0
 */

int is_palindrome(char *s)
{
	char *copy;

	copy = s;

	if (*copy == '\0') /* empty string is always palindrome */
		return (1);

	copy = point_to_last(copy);

	return (compare(s, copy));
}

/**
 * point_to_last - moves pointer to last character before null.
 * @s: the string
 * Return: pointer to last character of s
 */

char *point_to_last(char *s)
{
	if (*s != '\0')
		return (point_to_last(s + 1));

	return (s - 1); /* base case: character is '\0', move one step back */
}

/**
 * compare - compares character of a string from opposite ends
 * @left: character by the left
 * @right: character by the right
 *
 * Return: 1, if left and right are the same before intersection, otherwise, 0
 */

int compare(char *left, char *right)
{
	if (*left == *right)
	{
		/* if both pointers point to the same character, return 1 */
		if (left >= right)
			return (1);

		/* move pointers towards each other and recompare */
		return (compare(left + 1, right - 1));
	}

	return (0);
}
