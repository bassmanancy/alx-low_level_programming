#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: A pointer to the string.
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

