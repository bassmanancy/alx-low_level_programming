#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: A concatenated upon string.
 * @src: Appended string to @dest.
 *
 * Return: Destination string @ dest.
 */

char *_strcat(char *dest, const char *src)
{
	int c = 0, dest_len = 0;

	while (dest[c++])
		dest_len++;

	for (c = 0; src[c]; c++)
		dest[dest_len++] = src[c];

	return (dest);
}
