#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: is the number of times the character "\" should be printed
 */

void print_diagonal(int n)
{
int i, j;

if (n <= 0)
_putchar('\n');
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
