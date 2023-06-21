#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers, startinf with 1 and 2
 * Return:always 0(success)
 */

int main(void)
{
int count;
unsigned long fib1 = 1, fib2 = 2, sum;

for (count = 0; count < 50; count++)
{

sum = fib1 + fib2;
printf("%lu", sum);

fib1 = fib2;
fib2 = sum;

if (count == 49)
printf("\n");
else
print(",");
}
printf("\n");
return (0);
}
