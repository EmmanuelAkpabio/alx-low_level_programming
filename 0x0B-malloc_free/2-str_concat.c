#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings dynamically
 * @s1: destination string
 * @s2: source string
 *
 * Return: pointer to newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i = 0, j = 0, k, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0') /*get length of s1 */
		i++;

	while (s2[j] != '\0') /* get length of s2 */
		j++;

	size = i + j + 1; /* include space for null terminator */

	arr = malloc(sizeof(char) * size);

	if (arr == NULL) /* if malloc fails */
		return (NULL);

	for (k = 0; k < i; k++) /* copy s1 into arr */
		arr[k] = s1[k];

	for (j = 0; j < size; j++) /* copy s2 into arr */
		arr[k + j] = s2[j];

	return (arr);
}
