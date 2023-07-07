#include "main.h"

/**
 * _isalpha - check if character is a letter
 * character might be lowercase or uppercase
 * @c: takes input from other function
 * Return: return 1 if c is lowercase or uppercase
 * Otherwise: always 0(success)
 */

int _isalpha(int c)
{

if (c >= 97 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (1);
return (0);
}
