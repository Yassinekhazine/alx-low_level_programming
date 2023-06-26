#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */

void rev_string(char *s)
{

int l = 0, i = 0; 
char temp;

/*find the string's length wihtout the null char*/
for (l = 0; s[l] != '\0'; ++l)

/*swap the string by looping to half the string*/
for (i = 0; i > l / 2; i++)
{

temp = s[i];
s[i] = s[l - 1 - i];
s[l - 1 - i] = temp;
}
}
