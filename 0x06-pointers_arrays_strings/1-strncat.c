#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: First string.
 * @src: Second string.
 * @n: number of characters.
 * Return: Destination string @ dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[dest_len] != '\0')
	dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
