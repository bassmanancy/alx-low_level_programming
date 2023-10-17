#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the string.
 * Return: The lengh of the string.
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
