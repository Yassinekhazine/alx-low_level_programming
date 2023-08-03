#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: the number to be printed in binary
 */

void print_binary(unsigned long int n)
{

int i = sizeof(n) * 8, count = 0;
while (i)
{

if (n & 1L << --b)
{
_putchar('1')
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
