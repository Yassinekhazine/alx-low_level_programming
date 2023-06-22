#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: the number of times when / has to be printed
 */

void print_diagonal(int n)
{
int postn, space;

if (n > 0)
{
for (postn = 0; postn < n; postn++)
{
for (space = 0; space < postn; space++)
_putchar(' ');
_putchar('\\');

if (postn == n - 1)
continue;

_putchar('\n');
}
}

_putchar('\n');
}
