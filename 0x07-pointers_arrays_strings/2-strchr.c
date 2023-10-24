#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates character in a string.
 * @s: The string searched.
 * @c: character located.
 *
 * Return: if c is found - a pointer to first occurence.
 * if c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
