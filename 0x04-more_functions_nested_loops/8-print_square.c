#include "main.h"

/**
 * print_square - print a square by using #
 * @size: the size of the square
 * Return: 0(success)
 */

void print_square(int size)
{
int row, column;

for (row = 1; row <= size; row++)
{

for (column = 1; colum <= size; column++)
_putchar('#');
_putchar('\n');
}
}
