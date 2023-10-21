#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: value of times table to be printed.
 */
void print_times_table(int n)
{
	int num, mult, tot;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
		}

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

			}

			tot = num * mult;

			if (tot <= 99)
				_putchar(' ');
			if (tot <= 9)
				_putchar(' ');

			if (tot >= 100)
			{
				_putchar((tot / 100) + '0');
				_putchar(((tot / 10)) % 10 + '0');
			}
			else if (tot <= 99 && tot >= 10)
			{
				_putchar((tot / 10) + '0');
			}
			_putchar((tot % 10) + '0');
	}
	_putchar('\n');
}
