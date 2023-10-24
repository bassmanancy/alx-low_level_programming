#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies bytes from mem area src
 * to mem area dest.
 * @n: bytes copied.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n);
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
