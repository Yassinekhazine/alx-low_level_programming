#include "main.h"

/**
 * _strlen - returning the string's length
 * @str: the string to get the length of.
 * Return: The length of @str.
 */

size_t _strlen(const char *str)
{

size_t lng = 0;

while (*str++)
lng++;
return (lng);
}
