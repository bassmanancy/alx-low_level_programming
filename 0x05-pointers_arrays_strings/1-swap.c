#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of a and b.
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 *
 * Return: Nothing.
 * /

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
