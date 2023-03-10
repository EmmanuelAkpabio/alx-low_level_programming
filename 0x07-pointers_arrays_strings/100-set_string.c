#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to the pointer whose value is to be set
 * @to: value of s will be set to 'to'
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
