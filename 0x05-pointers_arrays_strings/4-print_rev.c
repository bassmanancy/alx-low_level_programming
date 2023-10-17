#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: A pointer to the string.
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
