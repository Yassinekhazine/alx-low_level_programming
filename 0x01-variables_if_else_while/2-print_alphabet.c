#include <stdio.h>

/**
 * main - Print all aplphabet letters
 * Return: 0(success)
 */
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
