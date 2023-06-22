#include "main.h"

/**
 * print_line - print a straight lin
 * @n: is the number of times the - character
 * should be printed
 */

void print_line(int n)
{
int ln;
if (n <= 0)
_putchar('\n');
else
{

for (ln = 1; ln <= n; ln++)
_putchar('_');
_putchar('\n');
}
}
