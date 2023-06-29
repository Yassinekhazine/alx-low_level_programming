#include "main.h"


/**
 * strcat - function that concatenates  two strings
 * @dest: A pointer to the string to be concatenated upon
 * @src: The source string to be appended to @dest
 * Return: A pointer to the destination string @dest
 */

char *strcat(char *dest, const char *src)
{
int k;
int n;

k = 0;
while (dest[k] != '\0')
{
k++;
}
n = 0;
while (src[n] != '\0')
{
dest[k] = src[n];
k++;
n++;

}
dest[k] = '\0';
return (dest);
}
