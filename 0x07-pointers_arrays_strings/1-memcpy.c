#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies bytes from memory area @src
 * to memory area @dest.
 * @n: bytes copied.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
