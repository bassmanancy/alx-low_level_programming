#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: A concatenated upon string.
 * @src: Appended string to @dest.
 * Return: Destination string @ dest.
 */

char *_strcat(char *dest,  char *src)
{
	int index = 0;
	int dest_len = 0;
	int i = 0;

	while (src[index] != '\0')
		index++;
	while (dest[dest_len} != '\0')
	dest_len++;

	for (i = dest_len; i <= (deset_len + index); i++)
		dest[i] = src[i - dest_len];

	return (dest);
}
