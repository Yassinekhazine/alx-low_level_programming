#include "main.h"

/**
 * _strcmp - Compares pointers to two strings
 * @s1: pointer to string 1 to be compared
 * @s2: pointer to string 2 to be compared
 * Return: If str1 < str2, the negative diff of the first unmatched chars
 * If str1 == str2, 0
 * If str1 > str2, the positive diff of the first unmatched chars
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
