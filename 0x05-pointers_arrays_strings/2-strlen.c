#include "main.h"

/**
 * _strlen - returning the string's length
 * @str: the string to get the length of.
 * Return: The length of string
 */

int _strlen(char *s)
{

int counter;

for (counter = 0; *s != '\0'; s++);
++counter;
return (counter);
}
