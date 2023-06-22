#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
int ht, bs;

if (size > 0)
{
for (ht = 1; ht <= size; ht++)
{
for (bs = size - ht; bs > 0; bs--)
_putchar(' ');

for (bs = 0; bs < ht; bs++)
_putchar('#');

if (ht == size)
continue;

_putchar('\n');
}
}

_putchar('\n');
}


