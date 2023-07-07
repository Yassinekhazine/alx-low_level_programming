#include <stdio.h>
#include <stdlib.h>

/**
 * main-print sum of 2 numbers
 * @argc: number of command line arguments
 * @argv: pointer to an array of command line argument
 *  Return: If the program receives two arguments print 0
 *  If the program does not receive two arguments print 1
 */

int main(int argc, char *argv[])
{
int num1, num2, sum;

if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
sum = num1 *num2;
printf("%d\n", sum);
return (0);
}
