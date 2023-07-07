#include "main.h"

/**
 * _puts - Print a string
 * @str: The string parameter to be printed
 * Return:Nnothing
 */

void _puts(char *str)
{

while (*str != '\0')
{

_putchar(*str + 0);
str++;
}
_putchar('\n');
}
