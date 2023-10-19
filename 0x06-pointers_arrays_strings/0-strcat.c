#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add a terminating null byte. */
	dest[i] = '\0';

	return (dest);
}
