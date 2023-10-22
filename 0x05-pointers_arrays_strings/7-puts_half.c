#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: The string to be printed.
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int index = 0, len = 0, n;

	while (str[index++])
		len++;

	if ((len % 2) ==0)
		n = len / 2;

	else
		n = (lwn + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);


	_putchar('\n');
}
