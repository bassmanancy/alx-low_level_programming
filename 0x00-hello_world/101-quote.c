#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(STDERR_FILENO, quote, strlen(quote));

	return (1);
}
