#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: A pointer to the string.
 * Return: Always 0.
 */

void rev_string(char *s)
{
	char *start = s;
	char *end = s + _strlen(s) - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
