#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: A pointer to the string.
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
