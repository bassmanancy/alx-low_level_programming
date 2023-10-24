#include "main.h"
#include <stdio.h>

/**
 * _strchr - Returns a pointer to the first occurrence of @c
 * in string @s, or @NULL
 * if character is not found.
 * @s: The string searched.
 * @c: Character located.
 * Return: if c is found - a pointer to first occurence.
 * if c is not found - NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++
	}
	return (NULL);
}
