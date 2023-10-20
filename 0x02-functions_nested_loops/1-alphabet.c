#include "main.h"

/**
 * main - prints the alphabet in lowecase, followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
