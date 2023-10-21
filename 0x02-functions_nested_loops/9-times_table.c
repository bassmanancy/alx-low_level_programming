#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, mult, tot;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			tot = num * mult;

			if (tot <= 9)
				_putchar(' ');
			else
				_putchar((tot / 10) + '0');

			_putchar((tot % 10) + '0');
		}
		_putchar('\n');
	}
}
