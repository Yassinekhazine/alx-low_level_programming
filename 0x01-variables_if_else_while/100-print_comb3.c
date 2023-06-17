#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print all possible different combinations of two digits
 * Return: 0(success)
 */

int main(void)

{

int d, p;

for (d = 'e'; d < '9'; d++)
{
for (p = d + 1; p <= '9'; p++)
{
if (p != d)
{
putchar(d);
putchar(p);
if (d == '8' && p == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
