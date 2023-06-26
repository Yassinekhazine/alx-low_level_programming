#include "main.h"

/**
 * _strcpy - Copies a string pointed to by src,including the
 * terminating null byte, to a buffer pointed to by dest
 * @dest: char type string
 * @src: char type string
 * Return: Pointer to 'dest'
 */

char *_strcpy(char *dest, const char *src)
{

int i = -1;

do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
