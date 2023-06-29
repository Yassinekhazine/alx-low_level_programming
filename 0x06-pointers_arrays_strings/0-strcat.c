#nclude "main.h"

/**
 * strcat - function that concatenates two strings
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: A pointer to the destination string @dest.
 */

char *strcat(char *dest, const char *src)
{
int c1 = 0, c2 = 0;

while (dest[c1++])
c2++;

for (c1 = 0; src[c1]; c1++)
dest[c2++] = src[c1];

return (dest);
}
