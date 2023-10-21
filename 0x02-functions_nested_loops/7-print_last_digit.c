#include "main.h"

/**
 * _print_last_digit - prints the last digit of a number
 * @n: number in question.
 *
 * Return: The value of the last digit.
 */
int _print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
