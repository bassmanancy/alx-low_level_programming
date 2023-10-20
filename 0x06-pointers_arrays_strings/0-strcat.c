#include "main.h"
/**
 * _strcat - Concatenates two strings.
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	while (dest[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	for (n = i; n <= (i + j); n++)

	dest[n] ='\0';

	return (dest);
}
