#include "holberton.h"
#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @ dest.
 */
char *strcat(char *dest, const char *src)
{
	int c = 0, dest_len = 0;

	while (dest[c++])
		dest_len++;

	for (c = 0; src[c]; c++)
		dest[dest_len++] = src[c];

	return (dest);
}
