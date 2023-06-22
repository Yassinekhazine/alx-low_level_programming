#include "main.h"

/**
 * print_square - print a square by using #
 * @size: the size of the square
 * Return: 0(success)
 */

void print_square(int size)
{
int row, column;

if (size > 0)
{

for (row = 0; row < size; row++)
{

for (column = 0; column < size; column++)
_putchar('#');

if (row == size - 1)

continue;
_putchar('\n');
}
}
_putchar('\n');
}
