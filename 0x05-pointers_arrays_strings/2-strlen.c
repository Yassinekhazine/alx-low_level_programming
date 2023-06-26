#include "main.h"

/**
 * _strlen - returning the string's length
 * @str: the string to get the length of.
 * Return: The length of @str.
 */

size_t _strlen(const char *str)
{

size_t length = 0;

while (*str++)
length++;
return (length);
}
