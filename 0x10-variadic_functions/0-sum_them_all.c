#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @n:tThe number of arguments
 * @...: the integers sum
 * Return: the integer sum
 */

int sum_them_all(const unsigned int n, ...)
{

va_list ap;
int sum = 0, i = n;

if (!n)
return (0);
va_start(ap, n);

while (i--)
sum += va_arg(ap, int);

va_end(ap);
return (sum);
}
