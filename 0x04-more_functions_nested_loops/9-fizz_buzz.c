#include "main.h"

/**
 * main - print numbers from 1 - 100 followed by a new line
 * print Fizz i fis multiples of 3
 * print Buzz if is multiples of 5
 * print FizzBuzz if is multiples of both 3 and 5
 * each word and number has to be sperated by space
 * Return: 0(success)
 */

int main(void)
{
int num;

for (num = 1; num <= 100; num++)
{

if ((num % 3) == 0 && (num % 5) == 0)
printf("FizzBuzz");

else if ((num % 3) == 0)
printf("Fizz");

else if ((num % 5) == 0)
printf("Buzz");

else
printf("%d", num);

if (num == 100)
continue;
printf(" ");
}

printf("\n");

return (0);
}
