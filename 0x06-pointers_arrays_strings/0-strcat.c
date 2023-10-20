#include "main.h"

/**
 * strcat -  concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * Return: dest.
 */

char *strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while ([i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
