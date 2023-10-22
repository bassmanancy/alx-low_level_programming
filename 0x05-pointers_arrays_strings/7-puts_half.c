#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: A pointer to the string.
 * Return: Always 0.
 */
void puts_half(char *str)
{
	char *start = str;
	char *end = str + _strlen(str) - 1;

	if (_strlen(str) % 2 == 0)
	{
		start += _strlen(str) / 2;
	}
	else
	{
		start += (_strlen(str) - 1) / 2 + 1;
	}

	while (*start != '\0')
	{
		_putchar(*start);
		start++;
	}

	_putchar('\n');
}
