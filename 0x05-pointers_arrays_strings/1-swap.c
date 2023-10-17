#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
