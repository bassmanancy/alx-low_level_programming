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
	int index = 0;
       	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
