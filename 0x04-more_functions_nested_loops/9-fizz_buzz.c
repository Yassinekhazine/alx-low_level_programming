#include "main.h"

/**
 * main - print numbers from 1 - 100 followed by a new line
 * print Fizz i fis multiples of 3
 * print Buzz if is multiples of 5
 * print FiaaBuzz if is multiples of both 3 and 5
 * each word and number has to be sperated by space
 * Return: 0(success)
 */

int main(void)
{
int num;

for (num = 1; num <= 100; num++)
{

if (num % 3 == 0 && !(num % 5 == 0))
print("Fizz");
else if (num % 5 == 0 && !(num % 3 == 0))
print("Buzz");
else if (num % 3 == 0 && num % 5 == 0)
print("FizzBuzz");

else
printf("%d", num);

if (num != 100)
printf(" ");
else
printf("\n");
}

return (0);
}
