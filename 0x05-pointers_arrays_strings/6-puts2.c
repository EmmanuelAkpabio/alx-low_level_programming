#include "main.h"

/**
 * puts2 - prints every even character of a string,
 * starting with the first character. Followed by a new line.
 * @str: the string
 * Description: for example when passed '0123456789', prints '02468'
 *
 * Returns: nothing
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
