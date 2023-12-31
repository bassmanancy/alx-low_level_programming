#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to a stdout.
 * @str: A pointer to the string.
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
