#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}

	char d = 'A';

	while (d <= 'Z')
	{
		putchar (d);
		d++;
	}

	putchar ('\n');

	return (0);
}
