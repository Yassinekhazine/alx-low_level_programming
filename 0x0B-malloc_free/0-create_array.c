#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array-creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to the array, NULL if fails
 */

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);

for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
