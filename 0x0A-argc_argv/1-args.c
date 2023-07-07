#include <stdio.h>

/**
 * main-print a number of arguments passed
 * @argc: number of commandline arguments
 * @argv: pointer t an array of command line arguments
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
