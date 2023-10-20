#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

putchar('\n');

return (0);
}
