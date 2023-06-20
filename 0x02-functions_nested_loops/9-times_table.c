#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0
 * Return: empty output
 */

void times_table(void)
{
int num, mult, prod, u, d;

for (num = 0; num <= 9; num++)
{
for (mult = 0; mult <= 9; mult++)
{
prod = num * mult;
if (prod > 9)
{
u = prod % 10;
d = (prod - u) / 10;
_putchar(44);
_putchar(32);
_putchar(d + '0');
_putchar(u + '0')
}
else
{
if (mult != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(z + '0');
}
}
_putchar('\n');
}
}

