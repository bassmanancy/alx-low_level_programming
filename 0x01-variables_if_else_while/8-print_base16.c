#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else if (i >= 10)
		{
			putchar (i + 'a' - 10);
		}
	}

	putchar('\n');

	return (0);
}
